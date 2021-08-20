/*
	 This is the server program.
 */
#include <sys/types.h>         
#include <sys/socket.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/un.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <netinet/ip.h> /* superset of previous */
#include <arpa/inet.h>

#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
void myFunc(int n)
{
	int status;
	wait(&status);
	printf("chlid has exited\n");
	return;
}

int main()
{
	int domain,sfd,addrlen,nfd;
	int type,retVal,i;
	struct sockaddr_in addr,peerAddr;
	unsigned char buffer[100];

	domain=AF_INET;
	type=SOCK_STREAM;
	sfd=socket(domain, type, 0);
	if(sfd<0)
	{
				perror("Socket:");
				return -1;
	}
	printf("A new connection has established\n");

	addr.sin_family= AF_INET;
	addr.sin_port = htons(3000);
	//addr.sin_addr.s_addr = inet_addr("0.0.0.0");
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	retVal=bind(sfd, (const struct sockaddr *)&addr,
																	(socklen_t)(sizeof(struct sockaddr)));

	if(retVal==0)
	{
				perror("retVal:");
	}

	listen(sfd,5);

	signal(SIGCHLD,myFunc);


	while(1)
	{
		addrlen=sizeof(peerAddr);
		nfd=accept(sfd,(struct sockaddr*)&peerAddr,(socklen_t *)&addrlen);
		if(nfd<0)
		{
			perror("accept:");
		}
		else
		{
			printf("accept is sucess\n");
			if(fork()==0)
			{
			 while(1)
			 {
					printf("Before buffer:%s\n",buffer);
					retVal=read(nfd,buffer,40);
					//retVal=recvfrom(nfd,buffer,40,0,NULL,0);
					printf("Number of bytes read:%d data:%s\n",retVal,buffer);
					if(strcmp(buffer,"bye")==0)
					{
						break;
					}
				}
				exit(0);
			}
		}
	}
	close(sfd);
	return 0;
}



