#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	pid_t ppid;

	printf("Please work, just trying out a lot of stuff\n");
	pid = getpid();
	ppid = getppid();
	printf("Our pid is: %d\n, pid");
}
