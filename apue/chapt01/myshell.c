#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include "../apue.h"


int main()
{

    int pid;
    char buf[MAXLINE];
    printf("%%");

    while(fgets(buf, MAXLINE, stdin) != NULL)
    {
        if (buf[strlen(buf)-1] == '\n')
            buf[strlen(buf)-1] = 0;
        if ((pid = fork()))
        {

        }


    }
    return 0;
}

