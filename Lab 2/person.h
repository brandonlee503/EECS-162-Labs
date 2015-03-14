#include <cstdlib>
#include "./vehicle.h"

class person
{
private:
	int num_vehicles;
	vehicle *v;

public:
	person();
	void init(int num_vehicles);
	int get_numvehicles();
	vehicle *get_vehicle(int i);
};
