#ifndef TRANSACTION_H
#define TRANSACTION_H

using namespace std;

class Transaction{
  public:
    Transaction(); // default contructor
    Transaction(string cUT, string cTU, string tT, float cUC); // constructor
    ~Transaction(); // default destructor

    string getCurrentUserType();
    string getCurrentTransactionUser();
    string getTransactionType();
    float getCurrentUserCredit();

    void setCurrentUserType(string cUT);
    void setCurrentTransactionUser(string cTU);
    void setTransactionType(string tT);
    void setCurrentUserCredit(float cUC);

    void print(); //test
    void storeDailyTransaction();
  private:
    string currentUserType;
    string currentTransactionUser;
    string transactionType;
    float currentUserCredit;
};

#endif // TRANSACTION_H
