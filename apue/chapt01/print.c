#include <stdio.h>
#include "../apue.h"

#define BUFSIZE 512
int main()
{
    int n;
    char buf[BUFSIZE];

    while((n = read(STDIN_FILENO, buf, BUFSIZE)))
    {
        if(write(STDOUT_FILENO, buf, BUFSIZE) != n){
            printf("write error");
        }
    }
    if(n<0){
        printf("read error");
    }
    printf("hello");
    return 0;
}

