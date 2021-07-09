/*
   Write  a program  to Convert
   a)  Hex to Binary
   b) Binary  to Hex
   c) Hex to  ASCII
   d) Text to Binary
 */

#include<stdio.h>

int* hexToBin(int);
int binToHex(int*);
char hexToAscii(int);
int* textToBin(char);

int main()
{	
  int hex,*hex1,i;
  int bin;
  char ch;
  printf("enter the Hexadecimal number\n");
  scanf("%i",&hex);
  printf("Hexadecimal input:0x%x\n",hex);
  hex1=hexToBin(hex);
  printf("Conversion from hex to bin:\n");
  for(i=31;i>=0;i--)
  {
    printf("%d",hex1[i]);
  }
  printf("\n");
  
  //Binary to Hexadecimal
  bin=binToHex(hex1);
  printf("Binary to hex:0x%x\n",bin);

  //Hexadecimal to ASCII
  printf("Enter hexadecimal to convert into Ascii\n");
  scanf("%i",&hex);
  ch=hexToAscii(hex);
  if(ch!=0)
  {
    printf("The 0x%x is converted to Ascii:%c\n",hex,ch);
  }
  else
  {
    printf("The 0x%x can't convert to Ascii\n",hex);
  }

  hex1=hexToBin(hex);
  printf("Conversion from hex to bin:\n");
  for(i=31;i>=0;i--)
  {
    printf("%d",hex1[i]);
  }
  printf("\n");
  return 0;
}

//conversion of Hexadecimal to Binary
int* hexToBin(int num)
{
  //Taking array of size 32,because int is 32-bit.And taken as static because we are going to return the address.
  static int hex[32];
  int i;
  for(i=0;i<32;i++)
  {
     hex[i] = num%2;
     num = num/2;
     if(num==0)
     {
        break;
     }
  }
  return hex;
}

int binToHex(int*p)
{

  int i,num,mul,sum;
  mul=1;
  sum=0;
  for(i=0;i<32;i++)
  {
    sum=sum+(p[i]*mul);
    mul=mul*2;
  }
  return sum;
}

char hexToAscii(int num)
{
 char ch;
 if((num>=97 && num<=123) || (num>=65 && num<=91))
 {
   ch=num;
   return ch;
 }
 else
 {
   return 0;
 }
}

int* textToBin(char ch)
{
  //Taking array of size 32,because int is 32-bit.And taken as static because we are going to return the address.
  static int textHex[32];
  int i,num;
  num=(int)ch;
  for(i=0;i<32;i++)
  {
    textHex[i] = num%2;
    num = num/2;
    if(num==0)
    {
      break;
    }
  }
  return textHex;
}

#if 0
//output
enter the Hexadecimal number
0x65
Hexadecimal input:0x65
Conversion from hex to bin:
00000000000000000000000001100101
Binary to hex:0x65
Enter hexadecimal to convert into Ascii
0x61
The 0x61 is converted to Ascii:a
Conversion from hex to bin:
00000000000000000000000001100001

//output
enter the Hexadecimal number
0x54
Hexadecimal input:0x54
Conversion from hex to bin:
00000000000000000000000001010100
Binary to hex:0x54
Enter hexadecimal to convert into Ascii
0x48
The 0x48 is converted to Ascii:H
Conversion from hex to bin:
00000000000000000000000001001000

//output
enter the Hexadecimal number
0x45
Hexadecimal input:0x45
Conversion from hex to bin:
00000000000000000000000001000101
Binary to hex:0x45
Enter hexadecimal to convert into Ascii
0x41
The 0x41 is converted to Ascii:A
Conversion from hex to bin:
00000000000000000000000001000001

#endif
