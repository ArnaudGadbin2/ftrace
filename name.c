/*
** EPITECH PROJECT, 2019
** name.c
** File description:
** strace
*/

#include "ftrace.h"
#include "name_2.c"

const char *get_name_g(long call)
{
    switch (call) {
        case SYS_get_kernel_syms : return "get_kernel_syms";
        case SYS_get_mempolicy : return "get_mempolicy";
        case SYS_get_robust_list : return "get_robust_list";
        case SYS_get_thread_area : return "get_thread_area";
        case SYS_getcwd : return "getcwd";
        case SYS_getdents : return "getdents";
        case SYS_getdents64 : return "getdents64";
        case SYS_getegid : return "getegid";
        case SYS_geteuid : return "geteuid";
        case SYS_getgid : return "getgid";
        case SYS_getgroups : return "getgroups";
        case SYS_getitimer : return "getitimer";
        case SYS_getpgid : return "getpgid";
        case SYS_getpgrp : return "getpgrp";
        case SYS_getpid : return "getpid";
        default :
            get_name_g_2(call);
    }
}

const char *get_name_f(long call)
{
    switch (call) {
        case SYS_fchownat : return "fchownat";
        case SYS_fcntl : return "fcntl";
        case SYS_fdatasync : return "fdatasync";
        case SYS_fgetxattr : return "fgetxattr";
        case SYS_flistxattr : return "flistxattr";
        case SYS_flock : return "flock";
        case SYS_fork : return "fork";
        case SYS_fremovexattr : return "fremovexattr";
        case SYS_fsetxattr : return "fsetxattr";
        case SYS_fstat : return "fstat";
        case SYS_fstatfs : return "fstatfs";
        case SYS_fsync : return "fsync";
        case SYS_ftruncate : return "ftruncate";
        case SYS_futex : return "futex";
        case SYS_futimesat : return "futimesat";
        default :
            get_name_g(call);
    }
}

const char *get_name_def(long call)
{
    switch (call) {
        case SYS_dup2 : return "dup2";
        case SYS_epoll_create : return "epoll_create";
        case SYS_epoll_ctl : return "epoll_ctl";
        case SYS_epoll_pwait : return "epoll_pwait";
        case SYS_epoll_wait : return "epoll_wait";
        case SYS_eventfd : return "eventfd";
        case SYS_execve : return "execve";
        case SYS_exit : return "exit";
        case SYS_exit_group : return "exit_group";
        case SYS_faccessat : return "faccessat";
        case SYS_fadvise64 : return "fadvise64";
        case SYS_fallocate : return "fallocate";
        case SYS_fchdir : return "fchdir";
        case SYS_fchmod : return "fchmod";
        case SYS_fchmodat : return "fchmodat";
        case SYS_fchown : return "fchown";
        default :
            get_name_f(call);
    }
}

const char *get_name_cd(long call)
{
    switch (call) {
        case SYS_capget : return "capget";
        case SYS_capset : return "capset";
        case SYS_chdir : return "chdir";
        case SYS_chmod : return "chmod";
        case SYS_chown : return "chown";
        case SYS_chroot : return "chroot";
        case SYS_clock_getres : return "clock_getres";
        case SYS_clock_gettime : return "clock_gettime";
        case SYS_clock_nanosleep : return "clock_nanosleep";
        case SYS_clock_settime : return "clock_settime";
        case SYS_clone : return "clone";
        case SYS_close : return "close";
        case SYS_creat : return "creat";
        case SYS_create_module : return "create_module";
        case SYS_delete_module : return "delete_module";
        case SYS_dup : return "dup";
        default :
            get_name_def(call);
    }
}

const char *get_name(long call)
{
    switch (call) {
        case SYS__sysctl : return "_sysctl";
        case SYS_access : return "access";
        case SYS_acct : return "acct";
        case SYS_add_key : return "add_key";
        case SYS_adjtimex : return "adjtimex";
        case SYS_afs_syscall : return "afs_syscall";
        case SYS_alarm : return "alarm";
        case SYS_brk : return "brk";
        default :
            get_name_cd(call);
    }
}