/*
check if array is sorted in ascending order or not?
 */

#include<stdio.h>
int main()
{
        int n,i,flag1 = 0,flag2 = 0;
        printf("Enter number of elemennts\n");
        scanf("%d",&n);
        int a[n];

        printf("enter elements\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

        printf("Elements:\n");
        for(i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
        printf("\n");

        //desending order
        for(i=0;i<n-1;i++)
        {
                if(a[i]>a[i+1])
                {
                        flag1=1;
                        break;
                }
        }
        
        //ascending order
        for(i=0;i<n-1;i++)
        {
                if(a[i]<a[i+1])
                {
                        flag2=1;
                        break;
                }
        }
       // printf("flag1:%d flag2:%d\n",flag1,flag2);

        if((flag1 == 1) && (flag2 == 1))
        {
                printf("not sorted order\n");
        }
        else
        {
                printf("sorted order\n");
        }

        return 0;
}


#if 0
//output

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elemennts
5
enter elements
1 2 3 4 5
Elements:
1 2 3 4 5 
sorted order

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elemennts
5
enter elements
5 4 3 2 1
Elements:
5 4 3 2 1 
sorted order

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elemennts
5
enter elements
4 5 3 2 8
Elements:
4 5 3 2 8 
not sorted order

linuxdev@linuxdev:~/embedded/c/20210620$ ./a.out
Enter number of elemennts
5
enter elements
8 6 544 2 3 
Elements:
8 6 544 2 3 
not sorted order

#endif




