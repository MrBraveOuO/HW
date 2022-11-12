#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inverse(int *);

int main(int argc, char *argv[]) {
	
	int a[3]={3,5,7},i;
	for(i=0;i<3;i++)
		printf("%d	",a[i]);
	printf("\n");
	
	inverse(a);
	
	for(i=0;i<3;i++)
		printf("%d	",a[i]);
	printf("\n");
	
	return 0;
}
void inverse(int *b)
{
	int tmp[3],i;
	for(i=0;i<3;i++)
		tmp[2-i]=b[i];
	for(i=0;i<3;i++)
		b[i]=tmp[i];
}
