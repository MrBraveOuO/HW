#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	unsigned seed;
	
	printf("Enter seed:");
	scanf("%u",&seed);
	
	srand(seed);
	
	for(i=1;i<=10;i++)
	{
		printf("%10d",1+(rand()%6));
		if(i%5==0)
		{
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
