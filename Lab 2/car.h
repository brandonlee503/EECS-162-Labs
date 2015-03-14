#include "./vehicle.h"

class car : public vehicle
{
private:
	string car_make;
	string car_model;
public:
	car();
	car(string make, string model, int seats, int wheels, int speed, string color);
	string make();
	void set_make(string m);
	string model();
	void set_model(string m);
};
