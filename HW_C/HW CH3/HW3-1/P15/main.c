#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maximum(int,int,int);
int main(int argc, char *argv[]) {
	int num1,num2,num3;
	printf("Enter three integers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("Maximum is: %d\n",maximum(num1,num2,num3));
	system("pause");
	return 0;
}

int maximum(int x,int y,int z)
{
	int max=x;
	if(y>max)
		max=y;
	if(z>max)
		max=z;
	return max;
}
