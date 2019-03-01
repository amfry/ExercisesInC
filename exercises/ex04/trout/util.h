#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <netinet/in.h>
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netinet/udp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <sys/un.h>
#include <stdarg.h>
#include <syslog.h>

void err_doit (int errnoflag, int level, char *fmt, va_list ap);
void err_sys (char *fmt, ...);
void err_quit (char *fmt, ...);
char *sock_ntop_host(const struct sockaddr *sa, socklen_t salen);
int sock_cmp_addr(const struct sockaddr *sa1, const struct sockaddr *sa2, socklen_t salen);
void tv_sub (struct timeval *out, struct timeval *in);
char *icmpcode_v4(int code);
struct Sigfunc *Signal(int signo,struct Sigfunc *func);
void *Malloc(size_t size);
void *Calloc(size_t n, size_t size);
void Gettimeofday(struct timeval *tv, void *foo);
