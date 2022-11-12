#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void staticArrayInit(void);
void automaticArrayInit(void);

int main(int argc, char *argv[]) {
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
	system("pause");
	return 0;
}

void staticArrayInit(void)
{
	static int array1[3];
	int i;
	
	printf("\nValues on entering staticArrayInit:\n");
	for(i=0;i<=2;i++)
	{
		printf("array1[%d] = %d ",i,array1[i]);
	}
	printf("\nVaules on exiting staticArrayInit:\n");
	
	for(i=0;i<=2;i++)
	{
		printf("array1[%d] = %d ",i,array1[i]+=5);
	}
}

void automaticArrayInit(void)
{
	int array2[3]={1,2,3};
	int i;
	
	printf("\n\nValues on entering automicArrayInit:\n");
	
	for(i=0;i<=2;i++)
	{
		printf("array2[%d] = %d ",i,array2[i]);
	}
	printf("\nVaules on exiting staticArrayInit:\n");
	
	for(i=0;i<=2;i++)
	{
		printf("array2[%d] = %d ",i,array2[i]+=5);
	}
}

