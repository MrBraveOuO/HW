#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void BubbleSort(int d[],int size);
int main() 
{
	int data[SIZE]={2,4,6,9,1,7,3,5,8,0};
	BubbleSort(data,SIZE);
	
	return 0;
}
void BubbleSort(int d[], int size) 
{
	int i,j,k,reg;
	for(i=0;i<size-1;i++)
	{
		printf("²Ä%d¶¥¬q ",i+1);
		for(j=9;j>i;j--)
		{
			if(d[9-j+1]<d[9-j])
			{
				reg=d[9-j];
				d[9-j]=d[9-j+1];
				d[9-j+1]=reg;
			}
					
		}
		
		for(k=0;k<=9;k++)
		{
			printf("%d ",d[k]);
		}
		printf("\n");
	}

}

