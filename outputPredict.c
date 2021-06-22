/*
 Execute the C program and note down the outputs
 */

#include<stdio.h>
int main()
{       
    int a[3][4]={
        {10,11,12,13},
        {20,21,22,23},
        {30,31,32,33}
    };
    int i,j;
    for(i=0;i<3;i++)
    {
        printf("Address of %d array :%u %u \n",i,a[i],*(a+i));
        for(j=0;j<4;j++)
        {
            printf("[element]:%d %d ",a[i][j],*(*(a+i)+j));
            printf("%d ",(*(*a+i)+j)); //prints each elements of first row
        }
        printf("\n");
    }
    return 0;
}

#if 0

//output
linuxdev@linuxdev:~/embedded/c/20210622$ ./a.out
Address of 0 array :3220766104 3220766104 
[element]:10 10 10 [element]:11 11 11 [element]:12 12 12 [element]:13 13 13 
Address of 1 array :3220766120 3220766120 
[element]:20 20 11 [element]:21 21 12 [element]:22 22 13 [element]:23 23 14 
Address of 2 array :3220766136 3220766136 
[element]:30 30 12 [element]:31 31 13 [element]:32 32 14 [element]:33 33 15 

#endif
