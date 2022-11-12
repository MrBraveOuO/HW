#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addbyone (int &xref);
int main() {
	int x=100;
	int y=addbyone(x);
	printf("x=%d\n",x);
	system("pause");
}

int addbyone (int &xref)
{
	xref++;
	printf("xref=%d\n",xref);
	return xref;
}
