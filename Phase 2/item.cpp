#include <iostream>
#include <fstream>
#include "item.h"

string availableItemsFile = "available_Items_File.ai";
// Constructors
Item::Item() {
    itemName;
    sellUser;
    currentWinner;
    daysRemaining;
    highestBid;
}

Item::Item(string iN, string sellU, string cW, int dR, float hB){
  itemName = iN;
  sellUser = sellU;
  currentWinner = cW;
  daysRemaining = dR;
  setHighestBid(hB);
}

Item::~Item() {
  cout << "destroying item object!" << endl;
}

// getters
string Item::getItemName(){return itemName;}
string Item::getSellUser(){return sellUser;}
string Item::getCurrentWinner(){return currentWinner;}
int Item::getDaysRemaining(){return daysRemaining;}
float Item::getHighestBid(){return highestBid;}
void Item::getAvailableItems(){
  // todo
}

// setters
void Item::setItemName(string iN) {itemName = iN;}
void Item::setSellUser(string sellU) {sellUser = sellU;}
void Item::setCurrentWinner(string cW) {currentWinner = cW;}
void Item::setDaysRemaining(int dR) {daysRemaining = dR;}
void Item::setHighestBid(float hB) {highestBid = hB;}

// print Item info testing
void Item::print() {
  cout << "Item Name: " + getItemName() << endl;
  cout << "Sell User: " + getSellUser() << endl;
  cout << "Current Winner: " + getCurrentWinner() << endl;
  cout << "Days Remaining: " + to_string(getDaysRemaining()) << endl;
  cout << "Highest Bid: " + to_string(getHighestBid()) << endl;
}
