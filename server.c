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
	addrlen=sizeof(peerAddr);
	nfd=accept(sfd,(struct sockaddr*)&peerAddr,(socklen_t *)&addrlen);


	if(nfd<0)
	{
			perror("accept:");
	}
	else
	{
			while(1)
			{
					printf("Before buffer:%s\n",buffer);
					retVal=read(nfd,buffer,40);
					//retVal=recvfrom(nfd,buffer,40,0,NULL,0);
					printf("Number of bytes read:%d data:%s\n",retVal,buffer);
					sleep(2);
					for(i=0;i<retVal;i++)
					{
						if(buffer[i]>='a' && buffer[i]<='z')
						{
							buffer[i]=buffer[i]-32;
						}
						else if(buffer[i]>='A' && buffer[i]<='Z')
						{
							buffer[i]=buffer[i]+32;
						}
					}
					write(nfd,buffer,strlen(buffer)+1);
			}
	}
	close(sfd);
	return 0;
}



