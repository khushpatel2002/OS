#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int N = 3;
	if(argc == 2)
		N = strtol(argv[1], NULL, 10);

	for(int i=0; i<N; i++)
	{
		fork();
		sleep(5); 
	}
	return 0;
}