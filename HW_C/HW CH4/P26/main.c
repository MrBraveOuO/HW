#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char array[5];
	printf("    array = %p\n&array[0] = %p\n   &array = %p\n",array,&array[0],&array);
	system("pause");
	return 0;
}
