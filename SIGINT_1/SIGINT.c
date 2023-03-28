/*
CS 410 OS
Prudhvi Balusu
Lab 03
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <signal.h> 
#include <unistd.h>
#include <time.h>

void handler(int signum)
{
    printf("Hello World!\n");
    alarm(1);
}

int main(int argc, char * argv[])
{
    signal (SIGALRM, handler);
    alarm(1);
    while(1) {
        sleep(1);
        printf("Turing was right\n");
       
    }
     
    return 0;
}
