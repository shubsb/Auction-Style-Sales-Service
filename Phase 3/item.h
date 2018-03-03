#ifndef ITEM_H
#define ITEM_H

using namespace std;

class Item {
  public:

    // Constructors
    Item();
    Item(string iN, string sellU, string cW, int dR, float hB);

    // Desctructor
    ~Item();

    // Accessors
    string getItemName();
    string getSellUser();
    string getCurrentWinner();
    int getDaysRemaining();
    float getHighestBid();

    // Mutators
    void setItemName(string iN);
    void setSellUser(string sellU);
    void setCurrentWinner(string cW);
    void setDaysRemaining(int dR);
    void setHighestBid(float hb);

    // Print function for debugging
    void print();

  private:
    
    string itemName;        // The items name
    string sellUser;        // The seller's name
    string currentWinner;   // The current winner's name
    int daysRemaining;      // Days remaining on the bid
    float highestBid;       // The highest bid
};

#endif // ITEM_H
