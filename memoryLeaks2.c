/*
 few sample programs and evaluate the memory leaks.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int **p,r,c,i,j;

    printf("enter number of pointers\n");
    scanf("%d",&r);
    p=(int **)malloc(sizeof(int *) * r);
    
    printf("enter number of element in each 1d array\n");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        p[i]=(int*)malloc(sizeof(int)*c);
    }

    printf("Enter elemnts[%d * %d]\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    
    printf("Elemnts\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }

    free(p);//forget to free each 1d array which is allocated
    return 0;
}

#if 0

The 1d array is allocated but each 1d array is not freed.
Therefore the memory become leak.

linuxdev@linuxdev:~/embedded/c/20210623$ ./a.out
enter number of pointers
4
enter number of element in each 1d array
3
Enter elemnts[4 * 3]
1 2 3 4 5 6 7 8 9 10 11 12 
Elemnts
1 2 3 
4 5 6 
7 8 9 
10 11 12 

#endif
