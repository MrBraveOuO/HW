#include <stdio.h>
#include <stdlib.h>
#define MAX 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr=fopen("output.txt","r");
	while(!feof(fptr))
	{
		bytes=fread(str,sizeof(char),MAX-1,fptr);
		str[bytes]='\0';
		printf("%s\n",str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}
