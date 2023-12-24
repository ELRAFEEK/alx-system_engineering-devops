#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * infinite_while - function with a loop to sleep the process
 * Return: 0
*/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}
/**
 * main - main function
 * Return: zombie processes
*/
int main(void)
{

	pid_t p;
	int x;

	for (x = 0; x < 5; x++)
	{
		p = fork();
		if (p > 0)
		{
			printf("Zombie process created, PID: %d\n", p);
		}
		else if ( p == 0)
		{
			exit (0);
		}
		else
		{
			return 0;
		}
	}
	infinite_while();
	return 0;
}
