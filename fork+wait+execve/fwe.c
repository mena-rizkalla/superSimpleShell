#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

  
  pid_t pid;
  char *argv[] = {"/bin/ls", "-l","/tmp" ,"/usr/", NULL};
  int status;

  int n = 2;
  pid = fork();
   
   if(pid != 0){
     wait(&status);
     n++;
     while(n < 5){
       pid = fork();
       n++;
       wait(&status);
     }
   }
  
  if(execve(argv[0],argv,NULL) == -1){
     perror("Error");
   }

  

  
}
