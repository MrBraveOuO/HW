#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char string1[60]="Welcome";
	char string2[60];
	
	int len;
	strcpy(string2,string1);
	
	len=strlen(string2);
	printf("string2=%s\n",string2);
	printf("¦r¦êªø«×¬°%d\n",len);
	system("pause");
	return 0;
}
