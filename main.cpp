#include <iostream>
#include "deck.h"

bool onePlay(){
    return false;
}
int main()
{
    deck* deckC = new deck;
    cout<<deckC->getCard();
    cout<<deckC->getCard();
    return 0;
}
