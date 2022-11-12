#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[SIZE]={19,3,15,7,11,9,13,5,17,1};
	int i;
	int j;
	
	printf("%s%13s%17s\n","Element","Value","Histogram");
	
	for(i=0;i<SIZE;i++)
	{
		printf("%7d%13d	",i,n[i]);
		for(j=1;j<=n[i];j++)
		{
			printf("%c",'*');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
