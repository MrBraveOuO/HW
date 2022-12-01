#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void callbyaddress(int *nPtr);

int main(int argc, char *argv[]) {
	int num = 5;
	printf("The original value of number is %d",num);
	
	callbyaddress(&num);
	
	printf("\nThe new value of number is %d\n",num);
	
	return 0;
}

void callbyaddress(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
