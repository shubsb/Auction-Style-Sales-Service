#include <iostream>
#include <fstream>
#include "item.h"


/**
 * Constructors
 */
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

/**
 * Desctructor
 */
Item::~Item() {
        cout << "destroying item object!" << endl;
}

/**
 * Accessors
 * @return The item name
 * @return The seller's username
 * @return The current winner's name
 * @return The days remaining to bid on item
 * @return The highest bid
 */
string Item::getItemName(){
        return itemName;
}
string Item::getSellUser(){
        return sellUser;
}
string Item::getCurrentWinner(){
        return currentWinner;
}
int Item::getDaysRemaining(){
        return daysRemaining;
}
float Item::getHighestBid(){
        return highestBid;
}

/**
 * Mutators
 * @param iN      Sets the items name
 * @param sellU   Sets the seller's username
 * @param cW      Sets the current winner
 * @param cW      Sets the days remaining for bidding on item
 * @param cW      Sets the highest bid
 */
void Item::setItemName(string iN) {
        itemName = iN;
}
void Item::setSellUser(string sellU) {
        sellUser = sellU;
}
void Item::setCurrentWinner(string cW) {
        currentWinner = cW;
}
void Item::setDaysRemaining(int dR) {
        daysRemaining = dR;
}
void Item::setHighestBid(float hB) {
        highestBid = hB;
}

/**
 * Print Item information primarily used for debugging
 */
void Item::print() {
        cout << "Item Name: " + getItemName() << endl;
        cout << "Sell User: " + getSellUser() << endl;
        cout << "Current Winner: " + getCurrentWinner() << endl;
        cout << "Days Remaining: " + to_string(getDaysRemaining()) << endl;
        cout << "Highest Bid: " + to_string(getHighestBid()) << endl;
}
