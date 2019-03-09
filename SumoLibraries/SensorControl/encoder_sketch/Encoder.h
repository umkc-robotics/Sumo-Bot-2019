
//Pure virtual and abstract class
class EncoderInterface {
  protected:
    volatile long encCount;
    virtual void initEncoder() = 0;
  public:
    virtual long getCount() = 0;
    virtual void resetCount() = 0;
    virtual void setCount(long newCount) = 0;
    virtual void incrementCount() = 0;
    virtual void decrementCount() = 0;
    virtual void checkEncoder() = 0;
    virtual void checkEncoderFlipped() = 0;
};

//concrete class
class Encoder: public EncoderInterface{
//class Encoder{
  protected:
    int PINA_INTERRUPT;
    int PINB_CHECKER;
    volatile long encCount;
    virtual void initEncoder() = 0;
  public:
    Encoder(int pinA, int pinB);
    virtual long getCount() = 0;
    virtual void resetCount() = 0;
    virtual void setCount(long newCount) = 0;
    virtual void incrementCount() = 0;
    virtual void decrementCount() = 0;
    virtual void checkEncoder() = 0;
    virtual void checkEncoderFlipped() = 0;

    //virtual void Encoder(int pinA, int pinB);
};
