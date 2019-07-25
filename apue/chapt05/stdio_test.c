#include <stdio.h>

#define LEN 10
int main()
{
    char buf[LEN];


    while(fgets(buf, LEN, stdin))
    {
        //fputs(buf, stdout); 
        printf("%s\n", buf);
    }
    return 0;
}

