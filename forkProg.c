/*
This pogram is used to understand the fork() system call and how wait() is 
used a process to come out of zombie process.
Zombie process will eat all the pids.
Program: Execute the fork() and wait() to understand the zombie and oprhan
          process.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
    if(fork())
    {
        int r;
        printf("----Before wait----\n");
        //If you not interest in chlid status
        r=wait(NULL);
        //If you want to know the chlid status,Then need to collect it.
        //r=wait(&s);//s have the status.o...success,1...Failure
        printf("Executed by parent,After Wait:%d\n",r);
    }
    else
    {
        printf("Executed by child\n");
        sleep(5);
    }
    return 0;
}

