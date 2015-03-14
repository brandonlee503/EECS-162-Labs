#include "./vehicle.h"

class truck : public vehicle
{
private:
	string car_make;
	string car_model;
	bool hitch;
public:
	truck();
	truck(string make, string model, bool hitch, int seats, int wheels, int speed, string color);
	string make();
	void set_make(string m);
	string model();
	void set_model(string m);
	bool has_hitch();
	void set_hitch(bool h);
};
