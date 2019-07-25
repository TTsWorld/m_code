#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    while((c = getc(stdin)))
    {
        if(putc(c, stdout) == EOF)
            perror("putc error");
            exit(-1);
   }
   if (ferror(stdin))
       perror("input error");

    return 0;
}

