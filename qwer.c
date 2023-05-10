#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h> 

int filedes;
void final(void);

int main()
{
	ssize_t nread;
	char buffer[1024];
	atexit(final);
	filedes = open("a.txt",O_RDONLY);
	while((nread = read(filedes,buffer,1024))>0)
	{
		printf("%s",buffer);
	}
}

void final(void)
{
	printf("close filedes\n");
	close(filedes);
}
