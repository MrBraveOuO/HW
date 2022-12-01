#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int recusiveMaximum(int*);
int main(int argc, char *argv[]) {
	int size,ans;
	printf("Enter array size:");
	scanf("%d",&size);
	int array[100]={0};
	int i,a;
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	ans=recusiveMaximum(array);
	printf("\n%d",ans);
	return 0;
}

int recusiveMaximum(int*data)
{
	int a;
	if(*data){
		a=(*data>recusiveMaximum(data+1))?*data:recusiveMaximum(data+1);		
	}
	else{
		return 0;
	}
	
	return a;
}

