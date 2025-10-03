#include <stdio.h>
#include <limits.h>

#define DEBUG 1

// #define BUGGER_SIZE
#if INT_MAX < 100000
#error int type is too small

#elif INT_MAX > 100000
#define BUGGER_SIZE 10
#endif

// #if DEBUG
// printf("value of i: %d\n", i);
// printf("value of j: %d\n", j);
// #endif

#define WIN_32

#ifndef WIN_32

#endif

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 100
#endif
// #define WIN32 10
#define MAC_OR_LINUX 199309L
int main(void)
{
#ifdef _WIN32
    printf("You are running a windows\n");
#elif defined(_POSIX_C_SOURCE) && _POSIX_C_SOURCE >= MAC_OR_LINUX
    printf("You are running a POSIX system (Linux or macOS)\n");
#else
// #error No operating system specified
#endif
    printf("%d\n", BUGGER_SIZE);
    return 0;
}
