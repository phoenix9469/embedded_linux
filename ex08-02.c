#include <stdio.h> 
#include <sys/types.h> 
#include <stdlib.h>
#include <sys/wait.h>

int main() 
{ 
	pid_t pid; 
	int status; 
 
	 pid = fork(); 

 if(pid > 0) { /* 부모 프로세스 */ 
 printf("parent: waiting..\n"); 
 wait(&status); 
 printf("parent: status is %d\n", status); 
 } 
 else if(pid == 0) { /* 자식 프로세스 */
 sleep(1); 
 printf("child: bye!\n"); 
 exit(1); 
 } 
 else 
 printf("fail to fork\n"); 
 
 printf("bye!\n"); 
}
