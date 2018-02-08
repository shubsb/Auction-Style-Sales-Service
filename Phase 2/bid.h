#ifndef BID_H
#define BID_H

using namespace std;

class Bid{
  public:
    Bid(); // default contructor
    Bid(float cB, float nB, float mnB); // constructor
    ~Bid(); // default destructor

    float getCurrentBid();
    float getNewBid();
    float getMinimumBid();

    void setCurrentBid(float cB);
    void setNewBid(float nB);
    void setMinimumBid(float mnB);

    void print();
  private:
    float currentBid;
    float newBid;
    float minimumBid;
  };

#endif // Item_H
