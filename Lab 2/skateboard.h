#include "./vehicle.h"

class skate : public vehicle
{
private:
	string skate_brand;
	string deck_design;

public:
	skate();
	skate(string brand, string deck, int seats, int wheels, int speed, string color);
	string brand();
	void set_brand(string b);
	string deck();
	void set_deck(string d);
};
