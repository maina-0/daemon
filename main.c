#include <stdio.h>
#include <sys/stat.h>

int pid();
int sid();

int main(){
    pid();
    umask(0);
    sid();
    return 0;
}
