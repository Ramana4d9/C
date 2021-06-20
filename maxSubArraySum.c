/*
   Find maximum sum of sub array
 */

#include <stdio.h>

int main()
{
        int n,i,temp,sum,tempSum,j,ele1,ele2;

        printf("Enter number of elements \n");
        scanf("%d",&n);

        int a[n];
        printf("enter elements\n");
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

        sum=0;
        for(i=0;i<n-1;i++)
        {
                temp=a[i];
                for(j=i+1;j<n;j++)
                {
                        tempSum=temp+a[j];
                        if(tempSum>sum)
                        {
                                sum=tempSum;
                                ele1=i;
                                ele2=j;
                        }
                }
        }

        printf("Max sum of subarray:%d and elements:%d %d\n",sum,a[ele1],a[ele2]);

        return 0;
}


#if 0

//output
linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
Enter number of elements 
5
enter elements
-1 2 3 4 -3
Elements are:
-1 2 3 4 -3 
Max sum of subarray:7 and elements:3 4

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
Enter number of elements 
3
enter elements
2 -2 1
Elements are:
2 -2 1 
Max sum of subarray:3 and elements:2 1

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out 
Enter number of elements 
5
enter elements
-2 3 -23 33 45
Elements are:
-2 3 -23 33 45 
Max sum of subarray:78 and elements:33 45

#endif
