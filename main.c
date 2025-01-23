#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

int pid();
int sid();
void sig(int signo);

int main(){
    pid();
    umask(0);
    sid();

  //  close(STDERR_FILENO);
    //close(STDIN_FILENO);
  //  close(STDOUT_FILENO);
    
    printf("hello");

   

    while (1) {
        if (signal(SIGINT, sig) == SIG_ERR) {
            perror("Signal registration failed");
            exit(EXIT_FAILURE);
        }
        sleep(1);
    }

    return 0;
}


