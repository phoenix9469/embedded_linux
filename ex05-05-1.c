#include <sys/types.h> 
#include <dirent.h> 
#include <unistd.h> 
#include <stdio.h>
#include <stdlib.h>

int cnt = 0;
int main() 
{ 
	DIR *dirp; 
	struct dirent *dentry; 

	if((dirp = opendir(".")) == NULL){
	printf("No dir\n");
	exit(1); 
	}
	while( dentry = readdir(dirp)) { 
		if(dentry->d_ino != 0)
			//printf("%s\n", dentry->d_name);
	cnt++;
	}
	printf("There is %d dir/file\n",cnt);
	closedir(dirp); 
} 
