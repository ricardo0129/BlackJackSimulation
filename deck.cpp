#include "deck.h"

deck::deck(int n){
    for(int i=0;i<4;i++){
        for(int j= 0;j<13;j++){
            D.push_back(min((j+1),10));
        }
    } 
    random_shuffle(D.begin(),D.end());
    used = 0;
    deckSize = n*52;
}

int
deck::getCard(int i){
    return D[i%deckSize];
}

int
deck::getSize(){
    return D.size();
}

void 
deck::shuffle(){
    random_shuffle(D.begin(),D.end());
}

int 
deck::usedCount(){
    return used;
}