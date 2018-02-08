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

int main(int argc, char const *argv[]) {
  /* code */
  string userType = "AA";
  string userName = argv[1];
  User *u1 = new User(userType, userName, 1000.0f);
  u1->addCredit(10.0f);
  u1->print();
  cout << "\n";

  User *u2 = new User("FS", "Miral", 100.0f);
  u2->addCredit(10.0f);
  u2->print();
  cout << "\n";

  User *u3 = new User("BS", "Shubham", 120.0f);
  u3->addCredit(100.0f);
  u3->print();
  cout << "\n";

  //string iN, string sellU, string cW, int dR, float hB
  Item *i1 = new Item("Book", "Shubham", "Adwan", 4, 100.0f);
  Item *i2 = new Item("Apple", "Miral", "Adwan", 4, 120.0f);
  i1->print();
  i2->print();

  Bid *b1 = new Bid(100.0f,120.0f,i1->getHighestBid()*1.05);
  b1->print();

  //vector<User> userList;
  vector<User> userList;
  userList.push_back(*u1);
  userList.push_back(*u2);
  userList.push_back(*u3);

  cout << "\nUser List:" << endl;
  for (vector<User>::iterator it = userList.begin() ; it != userList.end(); ++it){
    it->print();
    cout << '\n';
  }

  login(argv[1]);
  return 0;

  // memory management
  cout << '\n';
  delete u1;
  delete u2;
  delete u3;

  /*
  login
  logout
  createUser
  deleteUser
  advertise
  bid
  refund
  addCredit
  transactionCode (4 functions)
  */
}
