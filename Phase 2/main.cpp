#include <iostream>
#include <string>
#include <fstream>
#include "user.h"

using namespace std;

void login(string currentUser){

  ifstream userFile;
  userFile.open("currentUserAccountsFile.uaf");

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
  u1->print();
  u1->addCredit(20.0f);
  u1->print();
  delete u1;

  login(argv[1]);
  return 0;

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
