/*
** EPITECH PROJECT, 2019
** name.c
** File description:
** strace
*/

#include "ftrace.h"

const char *get_name_rest_2(long call)
{
    switch (call) {
        case SYS_semtimedop : return "semtimedop";
        case SYS_sendmsg : return "sendmsg";
        case SYS_sendto : return "sendto";
        case SYS_setsockopt : return "setsockopt";
        case SYS_shmat : return "shmat";
        case SYS_shmctl : return "shmctl";
        case SYS_shmdt : return "shmdt";
        case SYS_shmget : return "shmget";
        case SYS_shutdown : return "shutdown";
        case SYS_socket : return "socket";
        case SYS_socketpair : return "socketpair";
        case SYS_tuxcall : return "tuxcall";
        case SYS_getcpu : return "getcpu";
    default:
        return "unknown";
    }
}

const char *get_name_rest(long call)
{
    switch (call) {
        case SYS_accept : return "accept";
        case SYS_arch_prctl : return "arch_prctl";
        case SYS_bind : return "bind";
        case SYS_connect : return "connect";
        case SYS_epoll_ctl_old : return "epoll_ctl_old";
        case SYS_epoll_wait_old : return "epoll_wait_old";
        case SYS_getpeername : return "getpeername";
        case SYS_getsockname : return "getsockname";
        case SYS_getsockopt : return "getsockopt";
        case SYS_listen : return "listen";
        case SYS_msgctl : return "msgctl";
        case SYS_msgget : return "msgget";
        case SYS_msgrcv : return "msgrcv";
        case SYS_msgsnd : return "msgsnd";
        case SYS_newfstatat : return "newfstatat";
        case SYS_recvfrom : return "recvfrom";
        default :
            get_name_rest_2(call);
    }
}