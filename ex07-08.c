#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void func1(void);
void func2(void);

int main()
{
	printf("hrllo!\n");
	atexit(func1);
	atexit(func2);
	printf("bye!\n");
	exit(0);
}
void func1(void)
{
	printf("func1\n");
}

void func2(void)
{
	printf("func2\n");
}
