/*
Left rotate an array upto user's choice 
*/

#include<stdio.h>

int main()
{
        int n,i,temp,rotate,j;

        printf("Enter number of elements \n");
        scanf("%d",&n);

        int a[n];
        printf("enter elements\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

        printf("Number of time to do left rotate of array\n");
        scanf("%d",&rotate);

        printf("Elements are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");

        for(i=0;i<rotate;i++)
        {
                temp=a[0];
                for(j=0;j<n-1;j++)
                {
                        a[j]=a[j+1];
                }
                a[j]=temp;
        }

        printf("after left rotate elements are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");

        return 0;
}

#if 0
//output

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elements 
5
enter elements
1 2 3 4 5
Number of time to do left rotate of array
2
Elements are:
1 2 3 4 5 
after left rotate elements are:
3 4 5 1 2 

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elements 
3
enter elements
34 54 22
Number of time to do left rotate of array
3
Elements are:
34 54 22 
after left rotate elements are:
34 54 22
 
linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elements 
3
enter elements
2 3 2
Number of time to do left rotate of array
0
Elements are:
2 3 2 
after left rotate elements are:
2 3 2 

#endif

