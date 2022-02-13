#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
	time_t t;
	printf("Bienvenido al Programa\n");
	printf("Process Type	PID PPID	TIME\n");
	fork();
	fork();
	if(fork()==0)
	{
	sleep(1);
	}
	time(&t);
    printf("System Process  %d  %d  %s", getpid(),getppid(),ctime(&t));
	return 0;
}
