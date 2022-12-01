#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int a,b;
	int i,j;
	int result[10]={0};
	srand(time(NULL));
	
	for(i=1;i<=36000;i++)
	{
		a=(rand()%6)+1;
		b=(rand()%6)+1;
		for(j=0;j<=10;j++)
		{
			if(j == a+b-2)
			{
				result[j]++;
			}
		}
		
	}
	for(i=0;i<=10;i++)
		printf("%d¥X²{%d¦¸\n",i+2,result[i]);
	return 0;
}
