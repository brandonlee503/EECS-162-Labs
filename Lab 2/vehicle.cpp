#include "./vehicle.h"

vehicle::vehicle()
{
	this->type = "NaN";
	this->max_speed = 0;
	this->seats = 0;
	this->wheels = 0;
	this->color = "NaN";
}

//Set/get type
void vehicle::set_type(string t)
{
	this->type = t;
}

string vehicle::get_type()
{
	return this->type;
}

//Set/get number of seats
void vehicle::set_maxspeed(int s)
{
	this->max_speed = s;
}

int vehicle::get_maxspeed()
{
	return this->max_speed;
}

//Set/get number of seats
void vehicle::set_seats(int s)
{
	this->seats = s;
}

int vehicle::get_seats()
{
	return this->seats;
}

//Set/get number of wheels
void vehicle::set_wheels(int w)
{
	this->wheels = w;
}

int vehicle::get_wheels()
{
	return this->wheels;
}

//Set/get color
void vehicle::set_color(string color)
{
	this->color = color;
}

string vehicle::get_color()
{
	return this->color;
}

