#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int main()
{
	sigset_t set;
	int count = 5;
	sigfillset(&set);
	//sigaddset(&set,SIGINT);
	sigprocmask(SIG_BLOCK,&set,NULL);
	while(count)
	{
		printf("do not disturb(%d)\n",count--);
		sleep(1);
	}
	//sigprocmask(SIG_UNBLOCK,&set,NULL);
	printf("disturb me");
	while(1)
	{
		sigemptyset(&set);
		sigaddset(&set,SIGINT);
		sigprocmask(SIG_BLOCK,&set,NULL);
		
	}
}
