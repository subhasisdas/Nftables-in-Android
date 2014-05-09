/*
Test for libmnl library. Returns the buffer size for the mnl socket.
*/

#include<libmnl/libmnl.h>
#include <stdio.h>

int main()
{
        printf("TEST\n");
        printf("%d\n",MNL_SOCKET_BUFFER_SIZE);
	printf("DONE\n");
        return 0;
}
