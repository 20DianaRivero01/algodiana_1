#include <stdio.h>
#include <stdlib.h>

	int main()
	{
		int i, x, ct=0;

		printf("Write your number: ");
		scanf("%i", &x);

		for(i=1; i<=x; i++) //With this FOR cycle we determine if is a prime or not.
		{
			if(x%i==0) //condition1
			{
				ct++; //variable to COUNT
			}
		}
		if(ct>2) //condition2
		{
			printf(" \n isn't a Prime number ");
		}
		else
		{
			printf(" \n is a Prime number ");
		}
		return 0;
	}

