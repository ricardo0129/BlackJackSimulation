#include <iostream>
#include "deck.h"
#include "hand.h"
#include <time.h>
deck* cards;
bool dealerTurn(hand dealer, hand player,int i){
    int playerTotal = player.getTotal();
    int dealerTotal = dealer.getTotal();
    if(dealerTotal>playerTotal) return false;
    while(true){
        dealer.addCard(cards->getCard(i)); i++;
        if(dealer.getTotal()>21) return true;
        else if(dealer.getTotal()>player.getTotal()) return false;
    }
}

int playGame(int i, hand dealer, hand player){
    if(player.getTotal()>21){
        //lost the game
        return -1;
        printf("lost");
    }
    //simulate we stay  
    bool wonStay = dealerTurn(dealer,player,i);
    //simulate we hit
    player.addCard(cards->getCard(i));
    int statusHit = playGame(i+1,dealer,player);
    //count wins with current state 
    if(wonStay) statusHit++;
    else statusHit--;
    return statusHit;
}

bool StartGame(){
    int count=0;
    const int NUMGAMES=20;
    for(int i=0;i<5*NUMGAMES;i+=5){
        hand dealer(cards->getCard(i), cards->getCard(i+1));
        hand player(cards->getCard(i+2), cards->getCard(i+3));
        if(playGame(i+4,dealer,player)>0) count++;
    }
    cout<<(float)count<<endl;

}

int main()
{
    srand(time(NULL));
    cards = new deck(1);
    StartGame();
    return 0;
}
