#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "user.h"
#include "item.h"
#include "transaction.h"
#include "bid.h"

using namespace std;

void login(string currentUser){

  ifstream userFile;
  userFile.open("current_User_Accounts_File.uaf");

  bool loginStatus = false;

  while (!userFile.eof()){
    string line;
    userFile >> line;
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

void logout(){
  // TO D
};

void deleteUser(){
  // TO DO
};

void createUser(){
  // TO DO
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

void advertise(){
  // TO DO
  /*
  //string iN, string sellU, string cW, int dR, float hB
  Item *i1 = new Item("Book", "Shubham", "Adwan", 4, 100.0f);
  Item *i2 = new Item("Apple", "Miral", "Adwan", 4, 120.0f);
  // i1->print();
  // i2->print();

  */
};

void bid(){
  // TO DO
  /*
  Bid *b1 = new Bid(100.0f,120.0f,i1->getHighestBid()*1.05);
  // b1->print();
  */
};

void refund(){
  // TO DO
};

void addCredit(){
  // TO DO
};

int main(int argc, char const *argv[]) {
  string input;
  string user;
  cout << "Welcome to Auction Style Sales Service" << endl;
  cout << "Enter 'login' to start" << endl;
  cin >> input;
  if (input == "login") {
    cout << "\nEnter username: ";
    cin >> user;
    login(user);
  } else {
    cout << "Invalid login, please enter again" << endl;
  }

  cout << "Choose transaction type: \ncreate\ndelete\nadvertise\nbid\nrefund\naddCredit" << endl;

  return 0;
}
