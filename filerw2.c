#include <stdlib.h>

void file1(char *);

int main(int argc,char **argv)
{
	if(argc=2)
		exit(0);
	file1(argv[1]);
}
