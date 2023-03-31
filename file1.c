#include <stdio.h>

int main()
{
	FILE *file;
	file = fopen("text.txt","r");
	printf("%c\n",fgetc(file));
	fclose(file);
}
