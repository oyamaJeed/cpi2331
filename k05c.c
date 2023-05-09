/*** TCP/IP client program ***/
/* Usage: ./server HostName */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <netinet/in.h>

#define PORT 50001

char buf[32];  
int main(int argc,char *argv[])
{
  	struct sockaddr_in ServerAddr;
  	struct sockaddr_in ClientAddr;
  	struct hostent *HostInfo;
  	int ServerSessionID;
  	int ClientSessionID;
	int Serverlength;
	
	// argument error massage
  	if (argc!=2){
    	fprintf(stderr,"Usage: ./server HostName!\n");
    	exit(1);
  	}


	//Client socketID
	if ((ClientSessionID=socket(AF_INET,SOCK_STREAM,0))==-1){
    	fprintf(stderr, "Failed to make a socket!\n");
    	exit(1);
  	}
	//get Server data
	if ((HostInfo=gethostbyname(argv[1]))==NULL){
    	fprintf(stderr,"Failed to find host.\n");
    	exit(1);
  	}

	//set Server data
	ServerAddr.sin_family=AF_INET;
	ServerAddr.sin_port=htons(PORT);
	memcpy((char *)&ServerAddr.sin_addr,(char *)HostInfo->h_addr_list[0],HostInfo->h_length);

	Serverlength = sizeof(ServerAddr);
	//connect(my_socketID,&server_addr,server_addr_len)
	if ((ServerSessionID=connect(ClientSessionID,
			(struct sockaddr *)&ServerAddr,
			(socklen_t)Serverlength))==-1){
		fprintf(stderr,"Failed to connect.\n");
     	exit(1);
	}
	//recv(my_socketID,data,sizeof(data).flags)
	if (recv(ClientSessionID,buf,sizeof(buf),0)==-1){
		fprintf(stderr,"Failed to recv a message.\n");
		exit(1);
	}
	printf("%s\n",buf);

	


}

