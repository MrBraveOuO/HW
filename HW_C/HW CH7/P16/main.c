#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fptr;
	char str[MAX],ch;
	int i=0;
	fptr=fopen("output.txt","a");
	printf("�п�J�r��A��ENTER�䵲����J:\n");
	while((ch=getche())!=ENTER && i<MAX)
		str[i++]=ch;
	putc('\n',fptr);
	fwrite(str,sizeof(char),i,fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause"); 
	return 0;
}
