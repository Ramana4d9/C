
/*
   Write a C program implementing  mem copy operation with void pointers.
 */

#include<stdio.h>
void my_memcpy(const void *s,void *d, int n);
int main()
{
    int n,i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n],b[n];
    char s1[n],s2[n];
    
    printf("enter strings\n");
    scanf(" %[^\n]",s1);
    printf("[Befor] strings s1:%s s2:%s\n",s1,s2);
    

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Elements of A are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    my_memcpy(a,b,n);
    my_memcpy(s1,s2,n);

    printf("Elements of B are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    printf("\n");

    printf("[After] strings s1:%s s2:%s\n",s1,s2);
    return 0;
}

void my_memcpy(const void *s,void *d,int n)
{
    int i;
    for(i=0;i<n*(sizeof(int));i++)
    {
        *(int *)(d+i)=*(int *)(s+i);
    }
    return ;
}

#if 0 

//output
linuxdev@linuxdev:~/embedded/c/20210622$ ./a.out
Enter number of elements
5
enter strings
rama
[Befor] strings s1:rama s2: t���w��w�
Enter 5 elements
1 2 3 4 5
Elements of A are
1 2 3 4 5 
Elements of B are
1 2 3 4 5 
[After] strings s1:rama s2:rama

linuxdev@linuxdev:~/embedded/c/20210622$ ./a.out
Enter number of elements
3 
enter strings
my
[Befor] strings s1:my s2:Enter 3 elements
2 3 102
Elements of A are
2 3 102 
Elements of B are
2 3 102 
[After] strings s1:my s2:my

#endif
