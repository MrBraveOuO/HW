#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	for(x=1;x<=10;x++)	printf("%.2f ",sqrt(x));
	printf("\n");
	system("pause");
	return 0;
}
