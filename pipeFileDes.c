/*
Pipe need two file descriptors.One is write and another is Read.
Standard:fd[1] is used to write and fd[0] is used for read.
But changing this,I want to observe.If i change the file Descriptor,Then 
  output is not comaing as expetcted.
  fd[0] is read and fd[1] is write.Read call is blocking if pipe is empty.
  fd[1] is read and fd[0] is write.Read call is not blocking if pipe is empty.
  So not to change the standard.

*/


#include<stdio.h>
#include<string.h>

int main()
{
    int p[2],id;
    char s1[50],s2[50];
    pipe(p);
    perror("pipe:");
    id=fork();
    if(id != 0)//Parent
    {
        printf("Child pid:%d\n",id);
        printf("Enter data to send\n");
        scanf(" %[^\n]",s1);
        printf("string going to write into FIFO:%s\n",s1);
        write(p[1],s1,strlen(s1)+1);
        //write(p[0],s1,strlen(s1)+1);
    }
    else
    {
        printf("In child,Its pid:%d\n",getpid());
        printf("Before read\n");
        read(p[0],s2,sizeof(s2));
        //read(p[1],s2,sizeof(s2));
        printf("After read\n");
        printf("Read from fifo:%s\n",s2);
    }
    return 0;
}


