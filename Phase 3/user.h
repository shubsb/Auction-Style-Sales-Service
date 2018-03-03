#ifndef USER_H
#define USER_H

using namespace std;

class User{
  public:
    User(); // default contructor
    User(string uT, string uN, float c); // constructor
    ~User(); // default destructor

    string getUserType();
    string getUserName();
    float getCredit();

    void setUserType(string uT);
    void setUserName(string uN);
    void setCredit(float c);
    void addCredit(float c);

    void print();
  private:
    string userType;
    string userName;
    float credit;
};

#endif // USER_H
