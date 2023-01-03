/*
** EPITECH PROJECT, 2019
** name.c
** File description:
** strace
*/

#include "name_4.c"
#include "ftrace.h"

const char *get_name_s(long call)
{
    switch (call) {
        case SYS_sendfile : return "sendfile";
        case SYS_set_mempolicy : return "set_mempolicy";
        case SYS_set_robust_list : return "set_robust_list";
        case SYS_set_thread_area : return "set_thread_area";
        case SYS_set_tid_address : return "set_tid_address";
        case SYS_setdomainname : return "setdomainname";
        case SYS_setfsgid : return "setfsgid";
        case SYS_setfsuid : return "setfsuid";
        case SYS_setgid : return "setgid";
        case SYS_setgroups : return "setgroups";
        case SYS_sethostname : return "sethostname";
        case SYS_setitimer : return "setitimer";
        case SYS_setpgid : return "setpgid";
        case SYS_setpriority : return "setpriority";
        case SYS_setregid : return "setregid";
        case SYS_setresgid : return "setresgid";
        default :
            get_name_s_2(call);
    }
}

const char *get_name_rs(long call)
{
    switch (call) {
        case SYS_rt_sigqueueinfo : return "rt_sigqueueinfo";
        case SYS_rt_sigreturn : return "rt_sigreturn";
        case SYS_rt_sigsuspend : return "rt_sigsuspend";
        case SYS_rt_sigtimedwait : return "rt_sigtimedwait";
        case SYS_sched_get_priority_max : return "sched_get_priority_max";
        case SYS_sched_get_priority_min : return "sched_get_priority_min";
        case SYS_sched_getaffinity : return "sched_getaffinity";
        case SYS_sched_getparam : return "sched_getparam";
        case SYS_sched_getscheduler : return "sched_getscheduler";
        case SYS_sched_rr_get_interval : return "sched_rr_get_interval";
        case SYS_sched_setaffinity : return "sched_setaffinity";
        case SYS_sched_setparam : return "sched_setparam";
        case SYS_sched_setscheduler : return "sched_setscheduler";
        case SYS_sched_yield : return "sched_yield";
        case SYS_select : return "select";
        default :
            get_name_s(call);
    }
}

const char *get_name_r(long call)
{
    switch (call) {
        case SYS_read : return "read";
        case SYS_readahead : return "readahead";
        case SYS_readlink : return "readlink";
        case SYS_readlinkat : return "readlinkat";
        case SYS_readv : return "readv";
        case SYS_reboot : return "reboot";
        case SYS_remap_file_pages : return "remap_file_pages";
        case SYS_removexattr : return "removexattr";
        case SYS_rename : return "rename";
        case SYS_renameat : return "renameat";
        case SYS_request_key : return "request_key";
        case SYS_restart_syscall : return "restart_syscall";
        case SYS_rmdir : return "rmdir";
        case SYS_rt_sigaction : return "rt_sigaction";
        case SYS_rt_sigpending : return "rt_sigpending";
        case SYS_rt_sigprocmask : return "rt_sigprocmask";
        default :
            get_name_rs(call);
    }
}

const char *get_name_pq(long call)
{
    switch (call) {
        case SYS_pause : return "pause";
        case SYS_personality : return "personality";
        case SYS_pipe : return "pipe";
        case SYS_pivot_root : return "pivot_root";
        case SYS_poll : return "poll";
        case SYS_ppoll : return "ppoll";
        case SYS_prctl : return "prctl";
        case SYS_pread64 : return "pread64";
        case SYS_pselect6 : return "pselect6";
        case SYS_ptrace : return "ptrace";
        case SYS_putpmsg : return "putpmsg";
        case SYS_pwrite64 : return "pwrite64";
        case SYS_query_module : return "query_module";
        case SYS_quotactl : return "quotactl";
        default :
            get_name_r(call);
    }
}