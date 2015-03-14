#include <string>

using namespace std;

class vehicle
{
private:
	int seats;
	int wheels;
	int max_speed;
	string color;

public:
	vehicle();

	//Set/get number of seats
	void set_maxspeed(int s);
	int get_maxspeed();

	//Set/get number of seats
	void set_seats(int s);
	int get_seats();

	//Set/get number of wheels
	void set_wheels(int w);
	int get_wheels();

	//Set/get color
	void set_color(string color);
	string get_color();
};

