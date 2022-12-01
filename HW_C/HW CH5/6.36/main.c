// C program to reverse a string using recursion
#include <stdio.h>
#include <stdlib.h>
/* Function to print reverse of the passed string */
void reverse(char *str)
{
if (*str)
{
	
	reverse(str+1);
	printf("%c", *str);
}
}

/* Driver program to test above function */
int main()
{
int size;
printf("¦r¦êªø«×:");
scanf("%d",&size);
char a[size];
scanf("%s",&a);

reverse(a);
return 0;
}

