#include "./vehicle.h"

class bike : public vehicle
{
private:
	string bike_make;
	string bike_model;
	bool mountain_bike;
public:
	bike();
	bike(string make, string model, bool mountain, int seats, int wheels, int speed, string color);
	string make();
	void set_make(string m);
	string model();
	void set_model(string m);
	bool is_mountain();
	void set_mountain(bool m);
};
