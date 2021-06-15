/*
Program to find the sum of digits of a number until the sum is reduce to 1 digit
*/

#include<stdio.h>
int main()
{
        int n,sum,rem,n1;
        printf("Enter number\n");
        scanf("%d",&n);
        printf("Number:%d\n",n);
        n1=n;
        sum=0;
        while(1)
        {
                rem=n1%10;
                n1=n1/10;
                sum=sum+rem;
                if(n1==0)
                {
                        if(sum>9)
                        {
                                n1=sum;
                                sum=0;
                        }
                        else
                        {
                                if(sum>=0 && sum<=9)
                                {
                                        break;
                                }
                        }
                }
        }
        printf("sum of %d is %d\n",n,sum);
        return 0;
}

