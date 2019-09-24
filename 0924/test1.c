#include <sys/tpyes.h>
#include <stdio.h>

int main()
{
	struct stat buf;
	stat ("test1.txt" ,&buf);
	printf("st_mode = %o\n", buf .st_mode);

	return 0;
}


