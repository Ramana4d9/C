/*
Simulate interrupts with the help of function pointers.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

//Function declarations
void keyboardInt(void);
void mouseInt(void);
void usbInt(void);
void i2cInt(void);

int main()
{
    void (*p[4])(void);
    int k;
    p[0]=keyboardInt;
    p[1]=mouseInt;
    p[2]=usbInt;
    p[3]=i2cInt;
    while(1)
    {
        k=rand()%4;
        (p[k])();
        sleep(1);
    }
    return 0;
}

//function defination
void keyboardInt(void)
{
    printf("Keyboard interrupt is triggered\n");
    return;
}
void mouseInt(void)
{
    printf("mouse interrupt is triggered\n");
    return;
}
void usbInt(void)
{
    printf("USB interrupt is triggered\n");
    return;
}
void i2cInt(void)
{
    printf("I2C interrupt is triggered\n");
    return;
}

#if 0
//output
I2C interrupt is triggered
USB interrupt is triggered
mouse interrupt is triggered
I2C interrupt is triggered
mouse interrupt is triggered
I2C interrupt is triggered
USB interrupt is triggered
Keyboard interrupt is triggered
mouse interrupt is triggered
mouse interrupt is triggered
USB interrupt is triggered
I2C interrupt is triggered
USB interrupt is triggered
I2C interrupt is triggered
I2C interrupt is triggered
USB interrupt is triggered
Keyboard interrupt is triggered
USB interrupt is triggered
Keyboard interrupt is triggered
#endif
