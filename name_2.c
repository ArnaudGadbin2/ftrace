/*
** EPITECH PROJECT, 2019
** name.c
** File description:
** strace
*/

#include "name_3.c"
#include "ftrace.h"

const char *get_name_mno(long call)
{
    switch (call) {
        case SYS_mq_notify : return "mq_notify";
        case SYS_mq_open : return "mq_open";
        case SYS_mq_timedreceive : return "mq_timedreceive";
        case SYS_mq_timedsend : return "mq_timedsend";
        case SYS_mq_unlink : return "mq_unlink";
        case SYS_mremap : return "mremap";
        case SYS_msync : return "msync";
        case SYS_munlock : return "munlock";
        case SYS_munlockall : return "munlockall";
        case SYS_munmap : return "munmap";
        case SYS_nanosleep : return "nanosleep";
        case SYS_nfsservctl : return "nfsservctl";
        case SYS_open : return "open";
        case SYS_openat : return "openat";
        default :
            get_name_pq(call);
    }
}

const char *get_name_m(long call)
{
    switch (call) {
        case SYS_madvise : return "madvise";
        case SYS_mbind : return "mbind";
        case SYS_migrate_pages : return "migrate_pages";
        case SYS_mincore : return "mincore";
        case SYS_mkdir : return "mkdir";
        case SYS_mkdirat : return "mkdirat";
        case SYS_mknod : return "mknod";
        case SYS_mknodat : return "mknodat";
        case SYS_mlock : return "mlock";
        case SYS_mlockall : return "mlockall";
        case SYS_mmap : return "mmap";
        case SYS_modify_ldt : return "modify_ldt";
        case SYS_mount : return "mount";
        case SYS_move_pages : return "move_pages";
        case SYS_mprotect : return "mprotect";
        case SYS_mq_getsetattr : return "mq_getsetattr";
        default :
            get_name_mno(call);
    }
}

const char *get_name_kl(long call)
{
    switch (call) {
        case SYS_kexec_load : return "kexec_load";
        case SYS_keyctl : return "keyctl";
        case SYS_kill : return "kill";
        case SYS_lchown : return "lchown";
        case SYS_lgetxattr : return "lgetxattr";
        case SYS_link : return "link";
        case SYS_linkat : return "linkat";
        case SYS_listxattr : return "listxattr";
        case SYS_llistxattr : return "llistxattr";
        case SYS_lookup_dcookie : return "lookup_dcookie";
        case SYS_lremovexattr : return "lremovexattr";
        case SYS_lseek : return "lseek";
        case SYS_lsetxattr : return "lsetxattr";
        case SYS_lstat : return "lstat";
        default :
            get_name_m(call);
    }
}

const char *get_name_i(long call)
{
    switch (call) {
        case SYS_init_module : return "init_module";
        case SYS_inotify_add_watch : return "inotify_add_watch";
        case SYS_inotify_init : return "inotify_init";
        case SYS_inotify_rm_watch : return "inotify_rm_watch";
        case SYS_io_cancel : return "io_cancel";
        case SYS_io_destroy : return "io_destroy";
        case SYS_io_getevents : return "io_getevents";
        case SYS_io_setup : return "io_setup";
        case SYS_io_submit : return "io_submit";
        case SYS_ioctl : return "ioctl";
        case SYS_ioperm : return "ioperm";
        case SYS_iopl : return "iopl";
        case SYS_ioprio_get : return "ioprio_get";
        case SYS_ioprio_set : return "ioprio_set";
        default :
            get_name_kl(call);
    }
}

const char *get_name_g_2(long call)
{
    switch (call) {
        case SYS_getpmsg : return "getpmsg";
        case SYS_getppid : return "getppid";
        case SYS_getpriority : return "getpriority";
        case SYS_getresgid : return "getresgid";
        case SYS_getresuid : return "getresuid";
        case SYS_getrlimit : return "getrlimit";
        case SYS_getrusage : return "getrusage";
        case SYS_getsid : return "getsid";
        case SYS_gettid : return "gettid";
        case SYS_gettimeofday : return "gettimeofday";
        case SYS_getuid : return "getuid";
        case SYS_getxattr : return "getxattr";
        default :
            get_name_i(call);
    }
}