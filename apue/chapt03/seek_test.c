#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/types.h>

int main()
{
    off_t pos;
    char buf[] = "abcd";
    int flag, fd;
    char* filename = "test.txt";
    int rbytes, wbytes;

    if(access(filename, F_OK) != 0)
    {
        flag = O_CREAT|O_RDWR;
    }else{
        flag = O_EXCL|O_RDWR|O_APPEND;
    }
    if((fd = open(filename, flag, 0777)) < 0)
    {
        perror("open error: ");
        goto error_exit;
    }
    //if((pos = lseek(fd, 0, SEEK_SET)) !=0)
    //{
    //    perror("seek error:");
    //    goto error_exit;
    //}else{
    //    printf("current position: %lu \n", pos);
    //}
    if((wbytes = write(fd, buf, sizeof(buf))-1) <0)
    {
        perror("write error:");
        goto error_exit;
    }else{
        printf("current position: %lu \n", pos + wbytes);
    }
    //if ((pos = lseek(fd, 10, SEEK_END)) < 0)
    //{
    //    perror("seek error:");
    //    goto error_exit;
    //}else{
    //    printf("current position: %lu \n", pos);
    //}
    if ((rbytes = read(fd, buf, sizeof(buf))) < 0 )
    {
        perror("read error");
        goto error_exit;
    }
    printf("read: %s", buf);
    close(fd);

error_exit:
    exit(-1);
}
