#include <stdio.h>
#include <stdlib.h>
#define SIZE 12
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int j;
	int total=0;
	int a[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
	
	for(j=0;j<SIZE;j++)
	{
		total+=a[j];
	}
	
	printf("Total of array element values is %d\n",total);
	
	system("pause");
	return 0;
}

