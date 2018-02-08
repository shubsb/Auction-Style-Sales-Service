#ifndef ITEM_H
#define ITEM_H

using namespace std;

class Item{
  public:
    Item(); // default contructor
    Item(string iN, string sellU, string cW, int dR, float hB); // constructor
    ~Item(); // default destructor

    string getItemName();
    string getSellUser();
    string getCurrentWinner();
    int getDaysRemaining();
    float getHighestBid();

    void setItemName(string iN);
    void setSellUser(string sellU);
    void setCurrentWinner(string cW);
    void setDaysRemaining(int dR);
    void setHighestBid(float hb);

    void print();
  private:
    string itemName;
    string sellUser;
    string currentWinner;
    int daysRemaining;
    float highestBid;
};

#endif // Item_H
