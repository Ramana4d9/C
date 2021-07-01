/*
Write a program to print bits in the character byte without using bitwise operator. (Hint: Use Union & Bit fields)
*/

#include <stdio.h>

struct bit
{
  unsigned char a:1;
  unsigned char b:1;
  unsigned char c:1;
  unsigned char d:1;
  unsigned char e:1;
  unsigned char f:1;
  unsigned char g:1;
  unsigned char h:1;
};

union wb{
   int num;
   struct bit bitArray;;
};


int main()
{
   union wb stBitField;
   int i;
   printf("Enter the number");
   scanf("%d",&stBitField.num);
   printf("Number:%d\n",stBitField.num);

   printf("Particular bit[0]:%d\n",stBitField.bitArray.a);
   printf("Particular bit[1]:%d\n",stBitField.bitArray.b);
   printf("Particular bit[2]:%d\n",stBitField.bitArray.c);
   printf("Particular bit[3]:%d\n",stBitField.bitArray.d);
   printf("Particular bit[4]:%d\n",stBitField.bitArray.e);
   printf("Particular bit[5]:%d\n",stBitField.bitArray.f);
   printf("Particular bit[6]:%d\n",stBitField.bitArray.g);
   printf("Particular bit[7]:%d\n",stBitField.bitArray.h);

   return 0;
}


#if 0

//output
Enter the number20
Number:20
Particular bit[0]:0
Particular bit[1]:0
Particular bit[2]:1
Particular bit[3]:0
Particular bit[4]:1
Particular bit[5]:0
Particular bit[6]:0
Particular bit[7]:0

//output
Enter the number30
Number:30
Particular bit[0]:0
Particular bit[1]:1
Particular bit[2]:1
Particular bit[3]:1
Particular bit[4]:1
Particular bit[5]:0
Particular bit[6]:0
Particular bit[7]:0

//output
Enter the number40
Number:40
Particular bit[0]:0
Particular bit[1]:0
Particular bit[2]:0
Particular bit[3]:1
Particular bit[4]:0
Particular bit[5]:1
Particular bit[6]:0
Particular bit[7]:0
#endif
