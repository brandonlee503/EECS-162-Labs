#include "person.h"

person::person()
{
	this->num_vehicles = 0;
	this->v = NULL;
}

void person::init(int num_vehicles)
{
	this->num_vehicles = num_vehicles;
	this->v = new vehicle[this->num_vehicles];
}

int person::get_numvehicles()
{
	return this->num_vehicles;
}

vehicle *person::get_vehicle(int i)
{
	return &this->v[i];
}

