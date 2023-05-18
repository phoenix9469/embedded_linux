#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main()
{
	printf("pause return %d\n", pause());
}
