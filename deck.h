#ifndef DECK_H
#define DECK_H
#include <deque>
#include <deque>
#include <algorithm>
#include <random>
using namespace std;
class deck{
public:
    deck();
    int getCard();
    int getSize();
    int usedCount();
    void shuffle();

private:
    deque<int> D;
    int used;
};

#endif