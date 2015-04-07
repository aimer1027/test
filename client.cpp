#include <stdio.h>		 // perror
#include <string.h>		// strcmp , memset

#include <sys/types.h>		// AF_INET ,SOCK_STREAM
#include <sys/socket.h> 	// connect, socket
#include <arpa/inet.h>		// inet_aton
#include <netinet/in.h>		// sockaddr_in , socketaddr
#include <unistd.h>		// close 

#define MAX_LEN 1024

/*
 *
  method : get_userinfo
  description : get user information [username , userpassword]
  		end receving by '\n'
  parameters :
		buf : pointer points to the buffer 
  		len : length limit to the data writes into buffer to long
 * */

int get_userinfo ( char *buf , int len )
{
	int i ;
	char c ;
	
	if ( buf == NULL ) // points to an empty buffer
	{
		return -1 ;
	}
	
	i = 0 ;

	while ( (c = getchar ()) != '\n' && (c != EOF) && i < len-2 )
	{
		buf[i++] = c ;
	}
	
	buf[i++] ='\n';
	buf[i++] = '\0';
	
	return 0 ;

}

/**
 * method : input_userinfo 
 * description :
 * 	this method is used to get the right user information 
 * 	after get right info , send it to server by sock_fd 
 *
 * 	inner method , whie cycle will continue until get the 
 * 	legal information ,illegal info will be ignored
 *
 * */

void input_userinfo ( int conn_fd , const char *string )
{
	char input_buf [MAX_LEN] ;
	char recv_buf  [MAX_LEN] ;
	int  flag_userinfo ;
	
	do 
	{}while ( flag_userinfo == INVALID_USERINFO);
	
}









