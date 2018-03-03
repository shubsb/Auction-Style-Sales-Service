#include <iostream>
#include <fstream>
#include "bid.h"

/**
 * The maximum amount any user can bid
 */
float maximumBid = 999999.0f;

/**
 * Constructors
 */
Bid::Bid() {
        currentBid;
        newBid;
        minimumBid;
}

Bid::Bid(float cB, float nB, float mnB){
        currentBid = cB;
        newBid = nB;
        minimumBid = mnB;
}

/**
 * Desctructor
 */
Bid::~Bid() {
        cout << "destroying item object!" << endl;
}

/**
 * Accessors
 * @return The current bid
 * @return The newest bid
 * @return The minimum bid
 */
float Bid::getCurrentBid(){
        return currentBid;
}
float Bid::getNewBid(){
        return newBid;
}
float Bid::getMinimumBid(){
        return minimumBid;
}

/**
 * Mutators
 * @param cB  Sets the current bid amount
 * @param nB  Sets the new bid amount
 * @param mnB Sets the new minimum bid amount
 */
void Bid::setCurrentBid(float cB) {
        currentBid = cB;
}
void Bid::setNewBid(float nB) {
        newBid = nB;
}
void Bid::setMinimumBid(float mnB) {
        minimumBid = mnB;
}

/**
 * Print Bid information primarily used for debugging
 */
void Bid::print() {
        cout << "Current Bid: " + to_string(getCurrentBid()) << endl;
        cout << "New Bid: " + to_string(getNewBid()) << endl;
        cout << "minimumBid: " + to_string(getMinimumBid()) << endl;
}
