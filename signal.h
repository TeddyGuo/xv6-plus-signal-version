#ifndef __XV6_SIGNAL
#define __XV6_SIGNAL

#define _sigfpe_firstest
#define _sigfpe_timing
#define _sigfpe_secondtest

#define SIGHUP 0
#define SIGINT 1
#define SIGFPE 2
#define SIGKILL 3
#define SIGCLD 4

typedef void (*sighadler_t)(int);

int signal(int signum, sighadler_t handler);

#endif