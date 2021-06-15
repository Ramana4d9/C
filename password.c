/*
Write a program to take input as a password but should display only x's instead of characters.
*/

#include<stdio.h>
int main()
{
        char ch;
        while(1)
        {
                ch=getchar();
                if(ch=='\n')
                {
                        printf("\n");
                        break;
                }
                else
                {
                        printf("*");
                }
        }
        return 0;
}
