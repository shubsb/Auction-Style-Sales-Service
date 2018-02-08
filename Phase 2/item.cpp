#include <iostream>
#include "item.h"

// Constructors
Item::Item() {
    itemName = "IIIIIIIIIIIIIIIIIII";
    sellUser = "SSSSSSSSSSSSSS";
    currentWinner = "UUUUUUUUUUUUUU";
    daysRemaining = 000;
    highestBid = 000000.00;
}

Item::Item(string iN, string sellU, string cW, int dR, float hB){
  itemName = iN;
  sellUser = sellU;
  currentWinner = cW;
  daysRemaining = dR;
  HighestBid(hB);
}

// getters
string Item::getItemName(){return itemName;}
string Item::getSellUser(){return sellUser;}
string Item::getCurrentWinner(){return currentWinner;}
int Item::getDaysRemaining(){return daysRemaining;}
float Item::getHighestBid(){return highestBid;}

// setters
void Item::setItemName(string iN) {itemName = iN;}
void Item::setSellUser(string sellU) {sellUser = sellU;}
void Item::setCurrentWinner(string cW) {currentWinner = cW;}
void Item::setDaysRemaining(int dR) {daysRemaining = dR;}
void Item::setHighestbid(float hB) {HighestBid = hB;}

// print Item info
void Item::print() {
  cout << "Item Name: " + getItemName() << endl;
  cout << "Sell User: " + getSellUser() << endl;
  cout << "Current Winner: " + getCurrentWinner() << endl;
  cout << "Days Remaining: " + getDaysRemaining() << endl;
  cout << "Hieghest Bid: " + getHighestBid() << endl;
}
