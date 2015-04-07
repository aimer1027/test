#ifndef __MY_RECV_H
#define __MY_RECV_H
	void my_err ( const char *err_string , int line ) ;
	int my_recv( int conn_fd , char *data_buf , int len ) ;
#endif // my_recv.h
