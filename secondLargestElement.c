/*
Find the second largest number in the array
*/

#include<stdio.h>
int main()
{
        int n,i,firstMax,secondMax;
        printf("enter number of elements\n");
        scanf("%d",&n);
        int a[n];

        printf("Enter elements\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

        printf("Elements are:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");

        if(a[0]>a[1])
        {
                firstMax=a[0];
                secondMax=a[1];
        }
        else if(a[0]<a[1])
        {
                firstMax=a[1];
                secondMax=a[0];
        }
        else
        {
                firstMax=a[0];
                secondMax=a[1];
        }

        for(i=2;i<n;i++)
        {
                if(secondMax<a[i])
                {
                        if(firstMax<a[i])
                        {
                                secondMax=firstMax;
                                firstMax=a[i];
                        }
                        else
                        {
                                secondMax=a[i];
                        }
                }
        }

        printf("second largest element:%d\n",secondMax);
        return 0;
}

#if 0
//output
linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
enter number of elements
5
Enter elements
2 3 7 6 4
Elements are:
2 3 7 6 4 
second largest element:6

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
enter number of elements
4       
Enter elements
3 4 2 1
Elements are:
3 4 2 1 
second largest element:3

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
enter number of elements
4      
Enter elements
2 2 3 1
Elements are:
2 2 3 1 
second largest element:2

#endif
