#include <iostream>
#include <fstream>
#include "transaction.h"
#include "user.h"

// Constructors
string dailyTransactionFile ="daily_Transaction_File.tra";

Transaction::Transaction() {
  currentUserType;
  currentTransactionUser;
  transactionType;
  currentUserCredit;
}

Transaction::Transaction(string cUT, string cTU, string tT, float cUC){
  currentUserType = cUT;
  currentTransactionUser = cTU;
  transactionType = tT;
  currentUserCredit = cUC;
}

Transaction::~Transaction(){
  cout << "destroying user object!" << endl;
}

string Transaction::getCurrentUserType(){ return currentUserType; }
string Transaction::getCurrentTransactionUser(){ return currentTransactionUser; }
string Transaction::getTransactionType(){ return transactionType; }
float Transaction::getCurrentUserCredit(){ return currentUserCredit; }

void Transaction::setCurrentUserType(string cUT){ currentUserType = cUT; }
void Transaction::setCurrentTransactionUser(string cTU){ currentTransactionUser = cTU; }
void Transaction::setTransactionType(string tT){ transactionType = tT; }
void Transaction::setCurrentUserCredit(float cUC){ currentUserCredit = cUC; }

void Transaction::print(){
  cout << "Current User Type: " + getCurrentUserType() << endl;
  cout << "Current Transaction User: " + getCurrentTransactionUser() << endl;
  cout << "Transaction Code: " + getTransactionType() << endl;
  cout << "Current User Credit: " + to_string(getCurrentUserCredit()) << endl;
} //test

void Transaction::storeDailyTransaction(){
  ofstream file;
  file.open(dailyTransactionFile.c_str(), ios::out | ios::app );

  file << "Current User Type: " + getCurrentUserType() << endl;
  file << "Current Transaction User: " + getCurrentTransactionUser() << endl;
  file << "Transaction Code: " + getTransactionType() << endl;
  file << "Current User Credit: " + to_string(getCurrentUserCredit()) << endl;

  file.close();

}
