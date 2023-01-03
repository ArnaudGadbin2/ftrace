/*
** EPITECH PROJECT, 2019
** name.c
** File description:
** strace
*/

#include "name_5.c"
#include "ftrace.h"

const char *get_name_vwrest(long call)
{
    switch (call) {
        case SYS_vfork : return "vfork";
        case SYS_vhangup : return "vhangup";
        case SYS_vmsplice : return "vmsplice";
        case SYS_vserver : return "vserver";
        case SYS_wait4 : return "wait4";
        case SYS_waitid : return "waitid";
        case SYS_write : return "write";
        case SYS_writev : return "writev";
        case SYS_recvmsg : return "recvmsg";
        case SYS_security : return "security";
        case SYS_semctl : return "semctl";
        case SYS_semget : return "semget";
        case SYS_semop : return "semop";
        default :
            get_name_rest(call);
    }
}

const char *get_name_tu(long call)
{
    switch (call) {
        case SYS_timerfd_settime : return "timerfd_settime";
        case SYS_times : return "times";
        case SYS_tkill : return "tkill";
        case SYS_truncate : return "truncate";
        case SYS_umask : return "umask";
        case SYS_umount2 : return "umount2";
        case SYS_uname : return "uname";
        case SYS_unlink : return "unlink";
        case SYS_unlinkat : return "unlinkat";
        case SYS_unshare : return "unshare";
        case SYS_uselib : return "uselib";
        case SYS_ustat : return "ustat";
        case SYS_utime : return "utime";
        case SYS_utimensat : return "utimensat";
        case SYS_utimes : return "utimes";
        default :
            get_name_vwrest(call);
    }
}

const char *get_name_st(long call)
{
    switch (call) {
        case SYS_sync : return "sync";
        case SYS_sync_file_range : return "sync_file_range";
        case SYS_sysfs : return "sysfs";
        case SYS_sysinfo : return "sysinfo";
        case SYS_syslog : return "syslog";
        case SYS_tee : return "tee";
        case SYS_tgkill : return "tgkill";
        case SYS_time : return "time";
        case SYS_timer_create : return "timer_create";
        case SYS_timer_delete : return "timer_delete";
        case SYS_timer_getoverrun : return "timer_getoverrun";
        case SYS_timer_gettime : return "timer_gettime";
        case SYS_timer_settime : return "timer_settime";
        case SYS_timerfd_create : return "timerfd_create";
        case SYS_timerfd_gettime : return "timerfd_gettime";
        default :
            get_name_tu(call);
    }
}

const char *get_name_s_2(long call)
{
    switch (call) {
        case SYS_setresuid : return "setresuid";
        case SYS_setreuid : return "setreuid";
        case SYS_setrlimit : return "setrlimit";
        case SYS_setsid : return "setsid";
        case SYS_settimeofday : return "settimeofday";
        case SYS_setuid : return "setuid";
        case SYS_setxattr : return "setxattr";
        case SYS_sigaltstack : return "sigaltstack";
        case SYS_signalfd : return "signalfd";
        case SYS_splice : return "splice";
        case SYS_stat : return "stat";
        case SYS_statfs : return "statfs";
        case SYS_swapoff : return "swapoff";
        case SYS_swapon : return "swapon";
        case SYS_symlink : return "symlink";
        case SYS_symlinkat : return "symlinkat";
        default :
            get_name_st(call);
    }
}