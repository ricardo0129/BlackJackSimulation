#include <vector>
#include <algorithm>

using namespace std;

class hand{
public:
    hand(){
    };

    void addCard(int c){
        cards.push_back(c);
    };

    int getTotal(){
        int total = 0;
        sort(cards.begin(),cards.end()); 
        int aces = 0;
        for(int i=0;i<cards.size();i++){
            total+=cards[i];
        }
        if(aces==0) return total;
        for(int i=0;i<aces;i++){
            if(total+9>21) return total;
            else total+=9;
        }
        return total;
    };

    bool bust(){
        int total = getTotal();
        if(total>21) return true;
        else return false;
    };

private:
    vector<int> cards;
};