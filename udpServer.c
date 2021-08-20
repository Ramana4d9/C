/*
Udp server.
*/

#include<stdio.h>
#include<string.h>
#include<unistd.h>

#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <arpa/inet.h>
#include <netinet/in.h>

int main()
{
 int domain,type,sfd,addrlen;
 short int retVal;
 struct sockaddr_in addr;
char buffer[40];

 domain = AF_INET;
 type = SOCK_DGRAM;
 sfd=socket(domain,type,0);
 if(sfd<0)
 {
	 perror("socket:");
	 return -1;
 }

 addr.sin_family=AF_INET;
 addr.sin_port=htons(8000);
 addr.sin_addr.s_addr=inet_addr("0.0.0.0");
 addrlen=sizeof(addr);
 retVal=bind(sfd,(const struct sockaddr *)&addr,(socklen_t )addrlen);
 if(retVal<0)
 {
	 perror("bind:");
 }
 printf("Binding with socket points\n");

 while(1)
 {
	 printf("before Received msg:%s\n",buffer);
   recv(sfd,buffer,sizeof(buffer),0);
	 printf("Received msg:%s\n",buffer);
	}
	close(sfd);
	return 0;
}




