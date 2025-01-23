#include <signal.h>
#include <stdio.h>

void sig(int signo){
    printf("Signal number %i detected \n",signo);
    
}
