#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

   
    char *buffer = malloc(1024);
    size_t len = 1024;

    printf("Type the string : ");
    getline(&buffer, &len, stdin);
    printf("You typed : %s", buffer);

    char d[] = " ";

    char *portion = strtok(buffer ,d);
    while(portion != NULL){
    	printf("%s\n", portion);
	portion = strtok(NULL , d);
    }
    
    return 0;

}
