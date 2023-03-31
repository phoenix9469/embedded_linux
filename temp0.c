#include <stdlib.h>

void file1(char *);
void file2(char *);
char filenonnamae[11] = "temp0.txt";
char buffer[1024]="";
char alphabet[150]="";

int main()
{
	file1(filenonnamae);
	file2(filenonnamae);
}


#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void file1(char *filename)
{
	//int fd = open(filename,O_RDWR,0644);
	//int fd = open(filename, O_RDWR);
	//int fd = open(filename, O_RDONLY | O_CREAT);
	//int fd = opne(filename, O_WRONLY | O_CREAT,0644);
	char tex[1024]="";
	scanf("%s",tex);
	int fd = open(filename, O_RDWR | O_CREAT, 0644);
		if(fd<0)
		{
			printf("%s(%d)\n",strerror(errno),errno);
		}
	write(fd,tex,100);
	close(fd);	
}

void file2(char *filename)
{
	int fd = open(filename,O_RDONLY);
	read(fd,buffer,300);
	printf("%s",buffer);
	close(fd);
	for(int i=0;i<300;i++)
	{
		for(int j='a';j<='z';j++)
		{
			if(buffer[i]==j)
			{
				alphabet[j]++;
			}
		}
	}
	for(int i=0;i<300;i++)
	{
		for(int j='A';j<='Z';j++)
		{
			if(buffer[i]==j)
			{
				alphabet[j]++;
			}	
		}
	}
	for(int i='a';i<='z';i++)
	{
		printf("%c:",i);
		printf("%d\n",alphabet[i]);
	}
	for(int i='A';i<='Z';i++)
	{
		printf("%c:",i);
		printf("%d\n",alphabet[i]);
	}
}
