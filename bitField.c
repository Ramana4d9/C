/*
Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields)
*/

#include <stdio.h>

union wb{
   int num;
   unsigned char a:1;
};


int main()
{
   union wb stBitField;
   int k;
   printf("Enter the number you want to access the particular bit and input number\n");
   scanf("%d%d",&k,&stBitField.num);

   printf("Number:%d ,pos to access:%d\n",k,stBitField.num);
   printf("Particular bit:%d\n",stBitField.a);

   return 0;
}
