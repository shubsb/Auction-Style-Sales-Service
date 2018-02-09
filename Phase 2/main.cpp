#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "user.h"
#include "item.h"
#include "transaction.h"
#include "bid.h"

using namespace std;

/**
 * Tests if current user exists in current user accounts file and logs in.
 * Otherwise the program rejects the user
 * @param currentUser The users login credentials
 */
void login(string currentUser){

        /**
         * Opens and iterates through the current user accounts file
         * containing all user accounts
         */
        ifstream userFile;
        userFile.open("current_User_Accounts_File.uaf");

        bool loginStatus = false;

        while (!userFile.eof()) {
                string line;
                userFile >> line;

                // Checks if user exists in line of text
                if (currentUser == line.substr(0,15)) {
                        loginStatus = true;
                }
        }

        if (loginStatus == true) {
                cout << "LOGIN SUCCESSFUL" << endl;
        }else{
                cout << "LOGIN FAILED" << endl;
        }

        userFile.close();
};

/**
 * Logs the user out
 */
void logout(){
        // TODO
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
void addCredit(){
        // TODO
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
        string availableItemsFile = "available_Items_File.ai";
        string input;
        string user;

        /**
         * Welcomes user and asks user to login
         */
        cout << "Welcome to Auction Style Sales Service" << endl;
        cout << "Enter 'login' to start" << endl;
        cin >> input;

        /**
         * If the user decides to login their credentials are checked
         * @param input Command to login (should accept 'login')
         */
        if (input == "login") {
                cout << "\nEnter username: ";
                cin >> user;
                login(user);
        } else {
                cout << "Invalid login, please enter again" << endl;
        }

        /**
         * Prompt user to choose transaction type
         */
        cout << "Choose transaction type: \ncreate\ndelete\nadvertise\nbid\nrefund\naddCredit" << endl;

        return 0;
}
