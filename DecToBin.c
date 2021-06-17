/*
Write program to convert Decimal to Binary using recursion.
*/

#include<stdio.h>
void decToBin(int n);

int main()
{
        int n;
        printf("Enter number to convert decimal to binary\n");
        scanf("%d",&n);
        decToBin(n);
        printf("\n");
        return 0;
}

void decToBin(int n)
{
        if(n!=0)
        {
                decToBin(n/2);
                printf("%d",n%2);
        }
        else
        {
                return ;
        }
}
