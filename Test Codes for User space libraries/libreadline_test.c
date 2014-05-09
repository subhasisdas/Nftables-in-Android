/*
Test for readline library. Returns the version for libreadline library.	
*/

#include <stdio.h>
#include <readline/readline.h>

int main()
{
	printf("READLINE");
	printf( "%d\n",  RL_VERSION_MAJOR);
	printf("DONE");
	return 0;
}

