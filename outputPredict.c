/*
output prediction.
*/

#include<stdio.h>
int main()
{
        int x=10,y=3;
        {
                int x=100,z=10;
                printf("x:%d z:%d\n",x,z);
        }
        printf("x:%d z:%d\n",x,z);
        return 0;
}
