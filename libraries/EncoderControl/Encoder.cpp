//Encoder Object to Access Functions
Encoder::Encoder(){}
Encoder::Endcoder(int pinA, int pinB){
	int FL_EncA = pinA;
	int FL_EncB = pinB;
}

//Connect Encoders to active pins
void Endcoder::initEncoder(){
	attachInterrupt(digitalPinToInterrupt(FL_EncA),checkEncoder(Encoder encoder),CHANGE);
}
void checkEncoder() {
	if (digitalRead(FL_EncA) == digitalRead(FL_EncB)) {
		incrementCount();
	}
	else {
		decrementCount();
	}
}
// call to increment count
void Encoder::incrementCount() {
	encCount++;
}

// call to decrement count
void Encoder::decrementCount() {
	encCount--;
}
int Encoder::getCount(){
	return encCount;
}