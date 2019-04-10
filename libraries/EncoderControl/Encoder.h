class Encoder{

private:
	int FL_EncA;
	int FL_EncB;
	int encCount = 0;
public:
	Encoder(int pinA, int pinB);
	void initEncoder();
	// call to increment count
	void incrementCount();

	// call to decrement count
	void decrementCount();

	// get current count
	int getCount();
};