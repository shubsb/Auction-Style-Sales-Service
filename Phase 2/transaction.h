#ifndef TRANSACTION_H
#define TRANSACTION_H

using namespace std;

class Transaction {
  public:

    // Constructors
    Transaction();
    Transaction(string cUT, string cTU, string tT, float cUC);

    // Destructors
    ~Transaction();

    // Accessors
    string getCurrentUserType();
    string getCurrentTransactionUser();
    string getTransactionType();
    float getCurrentUserCredit();

    // Mutators
    void setCurrentUserType(string cUT);
    void setCurrentTransactionUser(string cTU);
    void setTransactionType(string tT);
    void setCurrentUserCredit(float cUC);


    void print();                   // Print function for debugging
    void storeDailyTransaction();   // Save transaction to file

  private:

    string currentUserType;         // Current user's account type
    string currentTransactionUser;  // Current user's name
    string transactionType;         // Transaction type being executed
    float currentUserCredit;        // Credit in user's account
};

#endif // TRANSACTION_H
