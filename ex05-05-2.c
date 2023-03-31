#include <sys/types.h> 
#include <dirent.h> 
#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
	DIR *dirp; 
	struct dirent *dentry; 
	char buffer[1024];
	if((dirp = opendir(".")) == NULL){
	printf("No dir\n");
	exit(1); 
	}
	
	printf("%ld",readlink("test.txt.soft-link",buffer,1024));
	closedir(dirp); 
} 
