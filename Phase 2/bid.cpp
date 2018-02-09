#include <iostream>
#include <fstream>
#include "bid.h"


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
 * @return currentBid
 * @return newBid
 * @return minimumBid
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
 * @param cB  What the current bid is
 * @param nB  The value of a new bid the user submits
 * @param mnB The value of the new minimum bid calculated after each bid
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

// print Bid information primarily used for debugging
void Bid::print() {
        cout << "Current Bid: " + to_string(getCurrentBid()) << endl;
        cout << "New Bid: " + to_string(getNewBid()) << endl;
        cout << "minimumBid: " + to_string(getMinimumBid()) << endl;
}
