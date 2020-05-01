//Funcions in C
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{

	if (a>b && a>c && a>d); //if "a" is greater than b,c,d that means "a" is the maximum, but if "a" doesn`t meet the condition, that means that "a" is not the maximum.
	{
		return a;
	}	
	else if(b>c && b>d) //if "b" is greater than c,d that means "b" is the maximum, but if "b" doesn`t meet the condition, that means "b" is not the maximum
	{
		return b;
	} 
	 else if(c>d) //if "c" is greater than d that means "c" is the maximum, but if "c" doesn`t meet the condition, that means "c" is not the maximum
	{
	 	return c;
	}
	else
	{
		return d; //If none of above meet the conditions, that mean that "d" is the maximum.
	}
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
