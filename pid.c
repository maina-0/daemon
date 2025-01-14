#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int pid(){
    printf("parent PID, %d\n",getpid());
    pid_t pid=fork();


    if (pid<0){
        perror("fork failed");
    } else if (pid == 0) {
        printf("child created\n");
        }
        else if (pid >0){
        printf("father dead\n");
        exit(0);

        }
    return 0;
}




