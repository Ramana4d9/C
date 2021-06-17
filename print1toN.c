/*
   Write a program to Print 1 to N using recursion and also draw the diagram
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
                print(N-1);
                printf("%d ",N);
        }
        else
        {
           // printf("\n");
            return ;
        }
}
