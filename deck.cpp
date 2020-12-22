#include "deck.h"

deck::deck(){
    for(int i=0;i<4;i++){
        for(int j= 0;j<13;j++){
            D.push_back(min((j+1),10));
        }
    } 
    random_shuffle(D.begin(),D.end());
    used = 0;
}

int
deck::getCard(){
    int d1 = D.front(); D.pop_front();
    D.push_back(d1);
    used++;
    return d1;
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