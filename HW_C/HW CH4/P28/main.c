#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void modifyArray(int b[],int size);
void modifyElement(int e);

int main(int argc, char *argv[]) {
	
	int a[SIZE]={0,1,2,3,4};
	int i;
	printf("Effects of passing entire arrayby reference:\n\nThe values of the original array are:\n");
	
	for (i=0;i<SIZE;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
	
	modifyArray(a,SIZE);
	printf("The values of the modified array are:\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n",a[3]);
	
	modifyElement(a[3]);
	printf("The value of a[3] is %d\n", a[3]);
	
	system("pause");
	return 0;
}
void modifyArray(int b[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		b[i]*=2;
	}
}
void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n",e*=2);
}
