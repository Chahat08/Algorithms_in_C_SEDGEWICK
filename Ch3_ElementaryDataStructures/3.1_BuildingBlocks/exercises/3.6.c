typedef struct
{
	//the value could be a number 2-10 or one of A, K, Q, J.
	char* value;

	//color represents the color of the card.
	enum {red, black } color;

	// the suit the card belongs to.
	enum{clubs, diamonds, hearts, spades } suit;
}PlayingCard;

int main()
{
	// a sample playing card: Red Queen of Hearts.
	PlayingCard card1;
	card1.value = "Queen";
	card1.color = red;
	card1.suit = hearts;

	return 0;
}