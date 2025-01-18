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
 //   close(STDIN_FILENO);
 //   close(STDOUT_FILENO);
 //   close(STDERR_FILENO);

    if (signal(SIGINT,sig)==SIG_ERR){
        perror("an error occurred, didn't quite catch your signal:");
        exit(1);
    }

     while (1) {
        sleep(1);
    }



    return 0;
}
