#include <stdio.h>
int main()
{
	alarm(5);
	printf("무한루프 \n");
	while(1){
		sleep(1);
		printf("1초경과\n");
	}
	printf("실행되지 않음\n");
}

