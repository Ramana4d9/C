/*
   How to print the current time, seconds, milliseconds, nanoseconds in linux
 */

#include<stdio.h>
#include<time.h>
#include<sys/time.h>

int main()
{
        struct tm t1,*t2;
        struct timeval timVal;
        time_t tv;

        gettimeofday(&timVal,NULL);
        printf("milli seconds:%u\n",timVal.tv_usec);
        printf("Nano seconds:%u\n",timVal.tv_usec*1000);
        //tv = mktime(&t1);
        tv=time(NULL);
       // asctime(&t);
        t2=localtime(&tv);
          //t2=gmtime(&tv);
        printf("seconds :%u\n",t2->tm_sec);
        printf("minutes :%u\n",t2->tm_min);
        printf("Hours: %u\n",t2->tm_hour);
        return 0;
}

