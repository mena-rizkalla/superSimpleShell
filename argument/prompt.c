#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int ac, char **av){
  int i = 0;
  
  while(av[i] != NULL){
    printf("%s \n" , av[i]);
    i++;
  }
}
