#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "user.h"
#include "item.h"
#include "transaction.h"
#include "bid.h"
#include <stdlib.h>

using namespace std;

/**
 * Tests if current user exists in current user accounts file and logs in.
 * Otherwise the program rejects the user
 * @param currentUser The users login credentials
 */
void login(string currentUser, string &currentUserAccountsFile){

        /**
         * Opens and iterates through the current user accounts file
         * containing all user accounts
         */
        ifstream userFile;
        userFile.open(currentUserAccountsFile.c_str());

        bool loginStatus = false;
        string userType;

        while (!userFile.eof()) {
                string line;
                userFile >> line;

              // Checks if user exists in line of text
              if (currentUser.substr(0,15) == line.substr(0,15)){
                loginStatus = true;
                userType = line.substr(16,2);
              }

        }

        if (loginStatus == true) {
                cout << "VALID_USER" << endl;
                cout << "Logged in as " + userType << endl;
        }else{
                cout << "INVALID_USER" << endl;
        }

        userFile.close();
};

/**
 * Logs the user out
 */
void logout(){

        cout << "Logout implementation" << endl;
};

/**
 * Deletes a user
 */
void deleteUser(){
        // TODO
};

/**
 * Creates a user
 */
void createUser(){
        // TODO
        /*
           string userType = "AA";
           string userName = argv[1];
           User *u1 = new User(userType, userName, 1000.0f);
           u1->addCredit(10.0f);
           // u1->print();
           // cout << "\n";

           User *u2 = new User("FS", "Miral", 100.0f);
           u2->addCredit(10.0f);
           // u2->print();
           // cout << "\n";

           User *u3 = new User("BS", "Shubham", 120.0f);
           u3->addCredit(100.0f);
           // u3->print();
           // cout << "\n";
         */
        /*
           //vector<User> userList;
           vector<User> userList;
           userList.push_back(*u1);
           userList.push_back(*u2);
           userList.push_back(*u3);

           cout << "\nUser List:" << endl;
           // for (vector<User>::iterator it = userList.begin() ; it != userList.end(); ++it){
           //   it->print();
           //   cout << '\n';
           // }
         */
};

/**
 * Advertises an item up for auction
 */
void advertise(){
        // TODO
        /*
           //string iN, string sellU, string cW, int dR, float hB
           Item *i1 = new Item("Book", "Shubham", "Adwan", 4, 100.0f);
           Item *i2 = new Item("Apple", "Miral", "Adwan", 4, 120.0f);
           // i1->print();
           // i2->print();

         */
};

/**
 * Submits a bid for an item
 */
void bid(){
        // TODO
        /*
           Bid *b1 = new Bid(100.0f,120.0f,i1->getHighestBid()*1.05);
           // b1->print();
         */
};

/**
 * Issues a refund of credits to user's account
 */
void refund(){
        // TODO
};

/**
 * Adds credit to a user's account
 */
void addCredit(string userCreditAdded, string &currentUserAccountsFile, float amountToAdd){
    ifstream userFile;
    userFile.open(currentUserAccountsFile.c_str());
    while (!userFile.eof()) {
      string line;
      userFile >> line;

      if (userCreditAdded.substr(0,15) == line.substr(0,15)){
        cout<<"User exists!";
      }
    }

};

/**
 * Gets the list of available items on auction
 */
vector<Item> getAvailableItems() {
        //  TODO
};

int main(int argc, char const *argv[]) {

        /**
         * This file stores every available item up for auction
         */
        string currentUserAccountsFile = argv[1];
        string availableItemsFile = argv[2];
        string dailyTransactionFile = argv[3];
        string input1;
        string user;


        cout << "\nLoading files..." << endl;
        cout << currentUserAccountsFile << endl;
        cout << availableItemsFile << endl;
        cout << dailyTransactionFile << endl;


        /**
         * Welcomes user and asks user to login
         */
        cout << "\nWelcome to Auction Style Sales Service" << endl;
        cout << "Enter 'login' to start" << endl;
        cin >> input1;

        /**
         * If the user decides to login their credentials are checked
         * @param input Command to login (should accept 'login')
         */
        if (input1 == "login") {
                cout << "\nEnter username: ";
                cin >> user;
                login(user, currentUserAccountsFile);
        } else {
                cout << "Invalid login, please enter again" << endl;
        }


        /**
         * Prompt user to choose transaction type
         */
        bool loginStatus = true;
        while (loginStatus == true){

          string input2;
          cout << "\nChoose command: \ncreate\ndelete\nadvertise\nbid\nrefund\naddCredit\ndisplayTransactions\nlogout" << endl;
          cin >> input2;

          if (input2 == "create"){
            cout << "TODO: create" << endl;
          }else if (input2 == "delete"){
            cout << "TODO: delete" << endl;
          }else if (input2 == "advertise"){
            cout << "TODO: advertise" << endl;
          }else if (input2 == "bid"){
            cout << "TODO: bid" << endl;
          }else if (input2 == "refund"){
            cout << "TODO: refund" << endl;
          }else if (input2 == "addCredit"){

            if (user.substr(16,2) == "AA") {
              string userCreditAdded = "UUUUUUUUUUUUUUU";
              float amountToAdd = 150.0f;
              if(amountToAdd > 0 && amountToAdd <= 1000.0f){
                addCredit(userCreditAdded,currentUserAccountsFile,amountToAdd);
              }
            }
            else {
              cout << "You are not an admin!" << endl;
            }

          }else if (input2 == "delete"){
            cout << "TODO: delete" << endl;
          }else if (input2 == "displayTransactions"){
            cout << "TODO: displayTransaction" << endl;
          }else if (input2 == "logout"){
            cout << "TODO: logout" << endl;
            logout();
            loginStatus = false;
          }else{
            cout << "Invalid command, please enter again" << endl;
          }
        }

        cout << "\nThank you come again!" << endl;


        return 0;
}
