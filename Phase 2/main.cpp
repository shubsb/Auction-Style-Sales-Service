#include<iostream>
#include<string>
#include<fstream>

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
