#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void alarmHandler();

int main()
{
	signal(SIGALRM, alarmHandler);
	alarm(5);
	printf("roof\n");
	while(1){
		sleep(1);
		printf("1 second later\n");
	}
	printf(" not play\n");
}

void alarmHandler()
{
	printf("wake up! \n");
	exit(0);
}


