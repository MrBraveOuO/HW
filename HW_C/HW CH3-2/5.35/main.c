#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fi (int,int);
int main(int argc, char *argv[]) {
	int first=0;
	int sec=1;
	printf("%d %d ",first,sec);
	fi(first,sec);
	
	return 0;
}

void fi(int a,int b)
{
	if(a+b<0)
	{
		return 0;
	}
	else
	{
		printf("%d ",a+b);
		return fi(b,a+b);
	}
}
