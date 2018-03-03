#include <iostream>
#include "user.h"

// Constructors
User::User() {
  userType;
  userName;
  credit;
}

User::User(string uT, string uN, float c) {
  userType = uT;
  userName = uN;
  setCredit(c);
}

User::~User() {
  cout << "destroying user object!" << endl;
}

// getters (accessors)
string User::getUserType(){return userType;}
string User::getUserName(){return userName;}
float User::getCredit(){ return credit;}

// setters
void User::setUserType(string uT){ userType = uT; }
void User::setUserName(string uN){ userName = uN; }
void User::setCredit(float c){ credit = c; }

// mutators
void User::addCredit(float c){ credit = credit + c; }

// print user
void User::print(){
  cout << "User Type: " + getUserType() << endl;
  cout << "User Name: " + getUserName() << endl;
  cout << "Credit: " + to_string(getCredit()) << endl;
}
