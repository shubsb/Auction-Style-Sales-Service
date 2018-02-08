#include <iostream>
#include <fstream>
#include "bid.h"


float maximumBid = 999999.0f;
// Constructors
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

Bid::~Bid() {
  cout << "destroying item object!" << endl;
}

// getters
float Bid::getCurrentBid(){return currentBid;}
float Bid::getNewBid(){return newBid;}
float Bid::getMinimumBid(){return minimumBid;}

// setters
void Bid::setCurrentBid(float cB) {currentBid = cB;}
void Bid::setNewBid(float nB) {newBid = nB;}
void Bid::setMinimumBid(float mnB) {minimumBid = mnB;}

// print Bid info testing
void Bid::print() {
  cout << "Current Bid: " + to_string(getCurrentBid()) << endl;
  cout << "New Bid: " + to_string(getNewBid()) << endl;
  cout << "minimumBid: " + to_string(getMinimumBid()) << endl;
}
