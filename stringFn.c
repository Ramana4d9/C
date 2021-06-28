/*
implementation of string length,string copy,string comparision.
*/

#include<stdio.h>
#include<stdlib.h>

int myStrLen(const char *str);
char* myStrCpy(char *dest,const char *src);
int myStrCmp(const char *s1,const char *s2);

int main()
{
    char *p1,*p2,str[10];
    int length,result;

    p1=(char *)malloc(sizeof(char) * 100);
    printf("Enter string1 to find length and copy to string2\n");
    scanf(" %[^\n]",p1);
    printf("Given str:%s\n",p1);
    length=myStrLen(p1);
    printf("string length of %s is %d\n",p1,length);
    p2=(char *)malloc(sizeof(char)*length+1);

    //result=myStrCmp(p1,p2);
    p2="venkat";
    result = myStrCmp(p1,p2);

    if(result==0)
    {
        printf("both string are equal\n");
    }
    else if(result>0)
    {
        printf("%s is greater than %s\n",p1,p2);
    }
    else if(result<0)
    {
        printf("%s is lesser than %s\n",p1,p2);
    }
    return 0;
}

int myStrLen(const char *str)
{
    int l=0;
    printf("In strLen function\n");
    while(*str !='\0')
    {
        l++;
        str++;
    }
    return l;
}

char* myStrCpy(char *dest,const char *src)
{
    char *tmp=dest;
    printf("myStrcpy function is called\n");
    while(*src !='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    return tmp;
}


int myStrCmp(const char *s1,const char *s2)
{
    int ret=0;
    printf("myStrCmp function is called\n");
    while(*s1!='\0' && *s2!='\0')
    {
        if(*s1!=*s2)
        {
            break;
        }
        s1++;
        s2++;
    }
    if(*s1 == *s2)
    {
        ret=0;
    }
    else if(*s1>*s2)
    {
        ret=1;
    }
    else if(*s1<*s2)
    {
        ret=-1;
    }
    return ret;
}


#if 0
//output-1
Enter string1 to find length and copy to string2
ram
Given str:ram
In strLen function
string length of ram is 3
myStrCmp function is called
ram is lesser than venkat

//output-2
Enter string1 to find length and copy to string2
venkata
Given str:venkata
In strLen function
string length of venkata is 7
myStrCmp function is called
venkata is greater than venkat

//output-3
Enter string1 to find length and copy to string2
venkata ramana
Given str:venkata ramana
In strLen function
string length of venkata ramana is 14
myStrCmp function is called
venkata ramana is greater than venkat

#endif
