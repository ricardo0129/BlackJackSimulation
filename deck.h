#ifndef DECK_H
#define DECK_H
#include <deque>
#include <deque>
#include <algorithm>
#include <random>
using namespace std;
class deck{
public:
    deck(int n);
    int getCard(int i);
    int getSize();
    int usedCount();
    void shuffle();

private:
    vector<int> D;
    int used;
    int deckSize;
};

#endif