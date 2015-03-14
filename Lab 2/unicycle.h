#include "./vehicle.h"

class uni : public vehicle
{
private:
	string uni_make;
	string uni_model;
	bool auto_balance;
public:
	uni();
	uni(string make, string model, bool bal, int seats, int wheels, int speed, string color);
	string make();
	void set_make(string m);
	string model();
	void set_model(string m);
	bool balance();
	void set_autobalance(bool b);
};
