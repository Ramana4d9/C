/*
Write a program to Swap the nibble in a byte without using bitwise operator.
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
 unsigned char ch;
 struct bit bitArray;;
};

int main()
{
  int temp,tempVal;
  union wb var;
  printf("enter variable\n");
  scanf(" %d",&var.ch);
  printf("Before swap:%d\n",var.ch);

  temp = var.bitArray.h;
  var.bitArray.h = var.bitArray.d;
  var.bitArray.d = temp;

  temp = var.bitArray.g;
  var.bitArray.g = var.bitArray.c;
  var.bitArray.c = temp;
  
  temp = var.bitArray.f;
  var.bitArray.f = var.bitArray.b;
  var.bitArray.b = temp;
  
  temp = var.bitArray.e;
  var.bitArray.e = var.bitArray.a;
  var.bitArray.a = temp;


  printf("After swap:%d\n",var.ch);
  return 0;
}



#if 0

//output
enter variable
12
Before swap:12
After swap:192

//output
enter variable
10
Before swap:10
After swap:160

//output
enter variable
1
Before swap:1
After swap:16

//output
enter variable
16
Before swap:16
After swap:1

#endif
