#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("parent PID, %d\n",getpid());
    pid_t pid=fork();

    sleep (10);
    if (pid<0){
        perror("fork failed");
    } else if (pid == 0) {
        printf("child created\n");
        }
        else if (pid >0){
        printf("father dead\n");
        exit(0);

        }
     
    exit(0);

    
}




