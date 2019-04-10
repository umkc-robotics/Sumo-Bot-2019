#include <Arduino.h>

class Sight
{
public:
	uint16_t distances[8];

	Sight();
	void senseOpponent();
	int findOpponent();
	uint16_t calculateDistance(int ir);
};