#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE *fptr1,*fptr2;
	char ch;
	fptr1=fopen("welcome.txt","r");
	fptr2=fopen("output.txt","w");
	if((fptr1!=NULL)&&(fptr2!=NULL))
	{
		while((ch=getc(fptr1))!= EOF )
			putc(ch,fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");	
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}
