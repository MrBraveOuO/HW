#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int power(int,int);

int main(int argc, char *argv[]) {
	int base,exp;
	printf("Enter the base and exponent:\n");
	scanf("%d %d",&base,&exp);
	printf("\nanswer is : %d",power(base,exp));
	return 0;
}

int power(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	else
	{			
		return a*power(a,b-1);
	}
}
