/*
 few sample programs and evaluate the memory leaks.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *p,n;
    printf("enter number of bytes\n");
    scanf("%d",&n);
    p=(int*)malloc(n);
    memset(p,n,0);
    printf("Memory is not freed\n");
    return 0;
}

#if 0
Memory is allocated but not freed.So memory leak happends.
//output:

linuxdev@linuxdev:~/embedded/c/20210623$ ./a.out
enter number of bytes
10     
Memory is not freed

linuxdev@linuxdev:~/embedded/c/20210623$ ./a.out
enter number of bytes
20
Memory is not freed

linuxdev@linuxdev:~/embedded/c/20210623$ ./a.out
enter number of bytes
100009  
Memory is not freed

#endif
