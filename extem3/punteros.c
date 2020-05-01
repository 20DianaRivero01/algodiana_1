//Pointers in C 

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function  
	
	int add,sub; //variables add,sub 
	
	add=*a+*b; // make an addition to get a  
	sub=*a-*b; // make a difference to get the absolute diferrence btweern both.
	if(sub<0)
	{
		sub=-sub;  //when sub is o make a substract
	}
	*a=add; //a its the result of the addition 
	*b=sub; //b is the result of the substraction 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
