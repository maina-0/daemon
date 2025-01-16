#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int pid();
int sid();

int main(){
    pid();
    umask(0);
    sid();
    close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);

    printf("hello\n");


    return 0;
}
