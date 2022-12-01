#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void callbyref(int &nPtr);
int main(int argc, char *argv[]) {
	int number = 5;
	printf("The original value of number is %d",number);
	
	callbyref(number);
	
	printf("\n Tje new value if number is %d\n",number);
	
	return 0;
}
void callbyref(int &nPtr)
{
	nPtr = nPtr * nPtr * nPtr;
}
