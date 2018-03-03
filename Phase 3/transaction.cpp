#include <iostream>
#include <fstream>
#include "transaction.h"
#include "user.h"

/**
 * All transactions saved to this file at the end of the session
 */
string dailyTransactionFile ="daily_Transaction_File.tra";

/**
 * Constructors
 */
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

/**
 * Destructor
 */
Transaction::~Transaction(){
        cout << "destroying user object!" << endl;
}

/**
 * Accessors
 * @return The current user's account type ie. AA, BS, FS, SS
 * @return The current user logged in
 * @return The type of transaction executed by the user
 * @return The current credit in the user's account
 */
string Transaction::getCurrentUserType(){
        return currentUserType;
}
string Transaction::getCurrentTransactionUser(){
        return currentTransactionUser;
}
string Transaction::getTransactionType(){
        return transactionType;
}
float Transaction::getCurrentUserCredit(){
        return currentUserCredit;
}

/**
 * Mutators
 * @param cUT Set the current user's account type
 * @param cTU Set the name for the current user logged in
 * @param tT  Set the type of transaction the user has executed
 * @param cUC Set the current credit amount for the user
 */
void Transaction::setCurrentUserType(string cUT){
        currentUserType = cUT;
}
void Transaction::setCurrentTransactionUser(string cTU){
        currentTransactionUser = cTU;
}
void Transaction::setTransactionType(string tT){
        transactionType = tT;
}
void Transaction::setCurrentUserCredit(float cUC){
        currentUserCredit = cUC;
}

/**
 * Print Transaction information primarily used for debugging
 */
void Transaction::print(){
        cout << "Current User Type: " + getCurrentUserType() << endl;
        cout << "Current Transaction User: " + getCurrentTransactionUser() << endl;
        cout << "Transaction Code: " + getTransactionType() << endl;
        cout << "Current User Credit: " + to_string(getCurrentUserCredit()) << endl;
}

/**
 * Save transaction to the daily transaction file
 */
void Transaction::storeDailyTransaction(){
        ofstream file;
        file.open(dailyTransactionFile.c_str(), ios::out | ios::app );

        file << "Current User Type: " + getCurrentUserType() << endl;
        file << "Current Transaction User: " + getCurrentTransactionUser() << endl;
        file << "Transaction Code: " + getTransactionType() << endl;
        file << "Current User Credit: " + to_string(getCurrentUserCredit()) << endl;

        file.close();
}
