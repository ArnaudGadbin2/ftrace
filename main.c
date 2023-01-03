/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** strace
*/

#include "ftrace.h"
#include "name.c"

void usage(int argc, char **argv)
{
    if (argc == 2 && (strcmp(argv[1], "--help") == 0)) {
        printf("USAGE: ftrace <command>");
        exit(0);
    }
    if (argc <= 1) {
        exit(84);
    }
}

void print_ptrace(pid_t child, long orig_eax, struct user_regs_struct regs)
{
    long params[3];
    long rax = 0;

    if (strcmp(get_name(orig_eax), "unknown") != 0) {
        ptrace(PTRACE_GETREGS, child, NULL, &regs);
        printf("%s(", get_name(orig_eax));
        (regs.rdi)?printf("0x%llx", regs.rdi):printf("0x0");
        (regs.rsi)?printf(", 0x%llx", regs.rsi):0;
        (regs.rdx)?printf(", 0x%llx", regs.rdx):0;
        (regs.r10)?printf(", 0x%llx", regs.r10):0;
        (regs.r9)?printf(", 0x%llx", regs.r9):0;
        (regs.r8)?printf(", 0x%llx", regs.r8):0;
        printf(")");
        rax = ptrace(PTRACE_PEEKUSER, child, 8 * RAX, NULL);
        printf(" = 0x%lx\n", rax);
    }
}

void program(pid_t child)
{
    long orig_eax = 0;
    int status = 0;
    int insyscall = 0;
    struct user_regs_struct regs;

    while (1) {
        wait(&status);
        if (WIFEXITED(status))
            break;
        orig_eax = ptrace(PTRACE_PEEKUSER, child, 8 * ORIG_RAX, NULL);
        print_ptrace(child, orig_eax, regs);
        ptrace(PTRACE_SINGLESTEP, child, NULL, NULL);
    }
}

int main(int argc, char **argv)
{
    pid_t child;
    char *args[argc];
    int i = 0;
    int j = 0;

    usage(argc, argv);

    if ((strcmp(argv[1], "-s") == 0))
        i += 1;
    for (;i < argc - 1; i++, j++)
        args[j] = argv[i+1];
    args[j] = NULL;
    child = fork();
    if (child == 0) {
        ptrace(PTRACE_TRACEME, 0, NULL, NULL);
        execvp(args[0], args);
    } else
        program(child);
    return 0;
}