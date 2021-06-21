/*
   Write a C Program to show matrix multiplication on 2-D Array
 */


#include<stdio.h>
int main()
{
        int r1,c1,i,j,k,r2,c2,sum;
        printf("Enter rows,columns of first matrix\n");
        scanf("%d%d",&r1,&c1);
        printf("Enter rows,columns of second matrix\n");
        scanf("%d%d",&r2,&c2);
        int a[r1][c1],b[r2][c2],c[r1][c2];

        printf("Enter elements of first matrix(%d * %d)\n",r1,c1);
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }

        printf("Enter elements of second matrix(%d * %d)\n",r2,c2);
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }

        printf("First matrix elements:\n");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%d ",a[i][j]);
                }
                printf("\n");
        }

        printf("Second matrix elements:\n");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        printf("%d ",b[i][j]);
                }
                printf("\n");
        }

        if(c1!=r2)
        {
                printf("matrix multiplication is not possible\n");
                return -1;
        }
        else
        {
                for(i=0;i<r1;i++)
                {
                        for(j=0;j<c2;j++)
                        {
                                sum=0;
                                for(k=0;k<c1;k++)
                                {
                                        sum=sum+a[i][k]*b[k][j];
                                }
                                c[i][j]=sum;
                        }
                }

                printf("Resultant matrix elements:\n");
                for(i=0;i<r1;i++)
                {
                        for(j=0;j<c2;j++)
                        {
                                printf("%d ",c[i][j]);
                        }
                        printf("\n");
                }
        }
        return 0;
}


#if 0
//output
linuxdev@linuxdev:~/embedded/c/20210621$ ./a.out
Enter rows,columns of first matrix
2 3
Enter rows,columns of second matrix
3 2
Enter elements of first matrix(2 * 3)
1 2 3 4 5 6
Enter elements of second matrix(3 * 2)
6 5 4 3 2 1
First matrix elements:
1 2 3 
4 5 6 
Second matrix elements:
6 5 
4 3 
2 1 
Resultant matrix elements:
20 14 
56 41 

linuxdev@linuxdev:~/embedded/c/20210621$ ./a.out
Enter rows,columns of first matrix
2 4
Enter rows,columns of second matrix
3 2
Enter elements of first matrix(2 * 4)
1 2 3 4 5 6 7 8
Enter elements of second matrix(3 * 2)
8 7 6 5 4 1
First matrix elements:
1 2 3 4 
5 6 7 8 
Second matrix elements:
8 7 
6 5 
4 1 
matrix multiplication is not possible

linuxdev@linuxdev:~/embedded/c/20210621$ ./a.out
Enter rows,columns of first matrix
3 5
Enter rows,columns of second matrix
5 1
Enter elements of first matrix(3 * 5)
1 2 3 4 5 6 7 8 9 11 22 33 44 55 66
Enter elements of second matrix(5 * 1)
99 88 77 66 55
First matrix elements:
1 2 3 4 5 
6 7 8 9 11 
22 33 44 55 66 
Second matrix elements:
99 
88 
77 
66 
55 
Resultant matrix elements:
1045 
3025 
15730 

#endif
