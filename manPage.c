/*
Write a program to Man Command with the help of System(). 
(Display the Menu of Man to take the input for choosing particular sub function)
Ex: Man 3  is   used for Library functions
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int option;
  char command[100],ch[30]="opa";
  printf("Choose the option\n");
  printf("1 -Executable programs or shell commands\n");
  printf("2 -System calls (functions provided by the kernel)\n");
  printf("3 -Library calls (functions within program libraries)\n");
  printf("4 -Special files (usually found in /dev)\n");
  printf("5 -File formats and conventions, e.g. /etc/passwd\n");
  printf("6 -Games\n");
  printf("7 -Miscellaneous (including macro packages and conventions),e.g. man(7), groff(7)\n");
  printf("8 -System administration commands (usually only for root)\n");
  printf("9 -Kernel routines [Non standard]\n");

  //scanf("%d",&option);
  //system("man 3");
  sscanf(command,"%s",ch);
  printf("command:%s\n",command);
  return 0;
}

