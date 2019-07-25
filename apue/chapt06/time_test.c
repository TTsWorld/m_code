#include <stdio.h>
#include <time.h>


int main()
{
    struct tm localtm, gmtm;
    time_t localtime_t, gmtm_t;


    localtime_t = time(NULL);
    printf("%d", localtime_t);
    //tm = gmtime(localtm_t);


    printf("Hello world\n");
    return 0;
}

