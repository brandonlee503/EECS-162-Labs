#include "./person.h"

#include <iostream>

using namespace std;

int main()
{
	//Our person object
	person p;

	//Get number of vehicles
	int num = 0;
	cout << "How many vehicles do you have? ";
	cin >> num;

	//Setup our person object
	p.init(num);

	//Setup vehicle data
	for(int i = 0; i < p.get_numvehicles(); i++)
	{
		//Get data for each vehicle
		cout << "Vehicle " << i << ":" << endl;

		string color = "";
		cout << "\tWhat color is this vehicle? ";
		cin >> color;

		int seats = 0;
		cout << "\tHow many seats? ";
		cin >> seats;

		int wheels = 0;
		cout << "\tHow many wheels? ";
		cin >> wheels;

		int speed = 0;
		cout << "\tWhat is the max speed? ";
		cin >> speed;


		//Set data for each vehicle
		p.get_vehicle(i)->set_color(color);
		p.get_vehicle(i)->set_seats(seats);
		p.get_vehicle(i)->set_wheels(wheels);
		p.get_vehicle(i)->set_maxspeed(speed);
	}

	//Output all vehicle data
	for(int i = 0; i < p.get_numvehicles(); i++)
	{
		//Get data for each vehicle
		cout << "Vehicle " << i << ":" << endl;

		cout << "\t Color: " << p.get_vehicle(i)->get_color() << endl;
		cout << "\t Seats: " << p.get_vehicle(i)->get_seats() << endl;
		cout << "\t Wheels: " << p.get_vehicle(i)->get_wheels() << endl;
		cout << "\t Speed: " << p.get_vehicle(i)->get_maxspeed() << endl;
	}

	return 0;
}
