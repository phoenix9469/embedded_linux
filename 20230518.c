#include <stdio.h> 
#include <unistd.h> 
#include <signal.h> 
#include <sys/types.h> 
#include <stdlib.h>
void timeover(int signum) 
{ 
printf("[parent]bye\n");
exit(0);
} 

int main() 
{ 
pid_t pid; 
struct sigaction act; 
act.sa_handler = timeover;

if((pid = fork()) > 0) 
{
	printf("[parent]hello\n");
sigaction(SIGINT, &act, NULL);
 pause();
} 
else if(pid == 0) 
{ 
	printf("[child]hello\n");
	sleep(2);
	kill(getppid(),SIGINT);
	printf("[child]bye\n");
}
else 
printf("fail to fork\n"); 
} 
