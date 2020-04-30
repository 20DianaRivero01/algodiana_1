#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

void main (int argc, char**argv)
{
	int limit = atoi(argv[1]); //argument vector limit
	int i;
	for (i = 1; i <= limit; i++) //declaration
	{
		printf("The counter is on %d\n",i);
	}
}
