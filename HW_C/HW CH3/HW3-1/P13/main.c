#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double Power(double,int);
int main(int argc, char *argv[]) {
	int k;	
	double Ans;
	printf("%d",&k);
	printf("�p��305��k����?�п�Jk=");
	scanf("%d",&k);
	Ans=Power(3.5,k);
	printf("3.5��%d����=%f\n",k,Ans);
	system("pause");
	return 0;
}

double Power(double X,int n)
{
	int i;
	double PowerXn=1;
	for(i=1;i<=n;i++)
		PowerXn=PowerXn*X;
	return PowerXn;
}
