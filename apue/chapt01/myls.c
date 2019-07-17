#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>


int main()
{
    DIR *dp;
    struct dirent *dirp;

    if((dp = opendir("./"))!= NULL)
    {
        printf("open err");
    }

    while((dirp = readdir(dp)) != NULL)
    {
        printf("%s \t %ld \t %ld \t %c \t \n",dirp->d_name,dirp->d_ino, dirp->d_off, dirp->d_type);
    }
    printf("Hello world\n");
    return 0;
}

