/*
client program
*/

#include<stdio.h>
#include<unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */

#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

int main()
{

int domain,type,sfd,addrlen;
struct sockaddr_in addr;
char buffer[40];
short int retVal;

domain=AF_INET;
type=SOCK_STREAM;

sfd=socket(domain,type, 0);
if(sfd<0)
{
perror("Socket:");
return -1;
}
printf("socket is created\n");

addr.sin_family = AF_INET;
addr.sin_port = htons(3000);
addr.sin_addr.s_addr = inet_addr("0.0.0.0");
//addr.sin_addr.s_addr = inet_addr("127.0.0.1");
addrlen=sizeof(addr);
retVal=connect(sfd, (const struct sockaddr *)&addr,addrlen);

if(retVal==-1)
{
perror("connect:");
//return -1;
}
printf("connected \n");


while(1)
{
	printf("data to transfer\n");
	scanf(" %[^\n]",buffer);
	sendto(sfd, (const void *)buffer, strlen(buffer)+1, 0,NULL,0);
//	sleep(1);
	//recv(sfd,buffer,sizeof(buffer),0);
	//printf("Recieved from client:%s\n",buffer);

}

close(sfd);
return 0;
}


