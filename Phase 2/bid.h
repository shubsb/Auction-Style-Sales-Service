#ifndef BID_H
#define BID_H

using namespace std;

class Bid {
  public:

    // Constructors
    Bid();
    Bid(float cB, float nB, float mnB);

    // Desctructors
    ~Bid();

    // Accessors
    float getCurrentBid();
    float getNewBid();
    float getMinimumBid();

    // Mutators
    void setCurrentBid(float cB);
    void setNewBid(float nB);
    void setMinimumBid(float mnB);

    // Print function for debugging
    void print();

  private:

    float currentBid;   // Current user bid
    float newBid;       // Newest bid by user
    float minimumBid;   // Minimum bid allowed
};

#endif // BID_H
