#include<stdio.h>
#include<ctype.h>
int main()
{
    char Alphabet;
 

    printf("Enter any character :");
    scanf("%c",&Alphabet);
 

    if(isalpha(Alphabet))
    {

        if(isupper(Alphabet))
        {

            printf("Given Character : %c \n",Alphabet);
            printf("After Case changing : %c \n",Alphabet+32);
        }
        else
        {
            printf("Given Character : %c \n",Alphabet);
            printf("After Case changing : %c \n",Alphabet-32);
        }
    }
    
    else
    {
        printf("Invalid Input: Please provide an Alphabet \n");
    }
    return 0;
}
