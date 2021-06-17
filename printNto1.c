/*
   Write a program to Print N to 1 using recursion and also draw the diagram
 */

#include <stdio.h>

void print(int N);

int main()
{
        int n;
        printf("Enter Range\n");
        scanf("%d",&n);
        print(n);
        return 0;
}

void print(int N)
{
        if(N>0)
        {
                printf("%d ",N);
                print(N-1);
        }
        else
        {
                printf("\n");
                return ;
        }
}
