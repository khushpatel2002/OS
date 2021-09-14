#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int n = fork();
	char *processName = (n != 0) ? "parent" : "child ";
	printf("Hello from %s [%d - %d]\n", processName, getpid(), n);
	return 0;
}
