/*
What is perror? how it is working? explore few examples.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,i;
    FILE *fp;
    p=(int *)malloc(sizeof(int)*10);
    perror("Malloc:");
    fp=fopen("v1.txt","r");
    perror("fopen:");
    return 0;
}

#if 0

Perror():used to print the error buffer.
  It works as redirecting the error buffer to stdout buffer.
  Every function returns some time whether it is sucess or failure.
  That return value will be stored error buffer.

//output
linuxdev@linuxdev:~/embedded/c/20210623$ ./a.out
Malloc:: Success
fopen:: No such file or directory
#endif

