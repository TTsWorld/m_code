#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <dirent.h>
#include <sys/types.h>
#include "../apue.h"

static void sig_int(int signo)
{
    printf("get a SIGINT %d \n", signo);
}


int main()
{

    pid_t pid;
    int status;
    char buf[MAXLINE];
    printf("%%");

    if (signal(SIGINT, sig_int) == SIG_ERR)
        printf("signal error");

    while(fgets(buf, MAXLINE, stdin) != NULL)
    {
        if (buf[strlen(buf)-1] == '\n')
            buf[strlen(buf)-1] = 0;
        if ((pid = fork()) < 0)
        {
            printf("fork error");
        }else if(pid == 0)
        {
            execlp(buf, buf, (char*)0);
            printf("couldn't execute:%s", buf);
            exit(127);
        }

        if ( (pid= waitpid(pid, &status, 0)) <0 )
        {
            printf("error waitpid");
            //exec(get_current_dir_name(), "clear");
        }
        printf("%% uid:%d gid:%d s ",getuid(), getgid());

    }
    return 0;
}

