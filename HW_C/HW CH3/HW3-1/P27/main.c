#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long factorial(long number);

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<=10;i++)
	{
		printf("%2d! = %1d\n",i,factorial(i));
	}
	system("pause");
	return 0;
}

long factorial(long number)
{
	if(number<=1)	return 1;
	else	return(number*factorial(number-1));
}
