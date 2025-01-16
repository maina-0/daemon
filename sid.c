#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int getpid();

int sid(){

    pid_t sid = setsid();

    if (sid==-1){
        perror("error creating new session");
        exit(1);
    }

    else if (sid==getpid()){
        printf("new session created %d\n", sid);
        
    }
    return 0;
}
