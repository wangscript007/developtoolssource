#include <stdio.h>
#include <time.h>
int main (void)
{
    time_t rawtime;
    struct tm* timeinfo;
    time( &rawtime );
    timeinfo = localtime ( &rawtime );
    printf ( "\007The current date/time is: %s", asctime (timeinfo) );

    return 0;
}
