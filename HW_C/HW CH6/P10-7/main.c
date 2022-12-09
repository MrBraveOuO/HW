#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct card{
	char *face;
	char *suit;
}card;
int main(int argc, char *argv[]) {
	card aCard;
	card *cardPtr;
	
	aCard.face = "ACE";
	aCard.suit = "Spades";
	
	cardPtr = &aCard;
	
	printf("%s%s%s\n%s%s%s\n%s%s%s\n",aCard.face," of ",aCard.suit,cardPtr->face, " of ",cardPtr->suit,(*cardPtr).face," of ",(*cardPtr).suit);
	
	return 0;
}
