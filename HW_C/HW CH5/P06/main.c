#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int callbyvalue(int n);

int main(int argc, char *argv[]) {
	int num = 5;
	printf("The original value of number is %d",num);
	num=callbyvalue(num);
	printf("\nThe new value of number is %d\n",num);
		
	return 0;
}

int callbyvalue(int n)
{
	return n*n*n;
}
