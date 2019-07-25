#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main()
{
    int fd;
    off_t pos;
    int wbytes;

    if((fd = open("hole.file", O_CREAT)) < 0)
    {
        perror("open error");
    }

    if((write(fd, "hello world", sizeof("hello world") != 0)))
        perror("write error");
    if ((pos = lseek(fd, 1024,SEEK_SET))<0)
        perror("seek error:");
    return 0;
}

