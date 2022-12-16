#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *in,*out;
	int cnt;
	char str[100];
	in=fopen("welcome.txt","r");
	out=fopen("output.txt","w");
	while(!feof(in)){
		cnt=fscanf(in,"%s",str);
		if(cnt>0)
			fprintf(out,"%s\n",str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
