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

int ttime=0;
void sigint_handler(int signum);
void handler(int signum)
{
    printf("Hello World!\n");
    alarm(1);
}

int main(int argc, char * argv[])
{
    signal(SIGINT, sigint_handler);
    signal (SIGALRM, handler);
    alarm(1);
    while(1) {
        sleep(1);
        printf("Turing was right\n");
        ttime++;
       
    }
     
    return 0;
}
void sigint_handler(int signum) { 
   signal(SIGINT, sigint_handler);
  printf("\nexececution time is %d seconds",ttime);
  exit(1);
   fflush(stdout);
}
