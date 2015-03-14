#include "vector.hpp"
#include <vector>
#include <iostream>

using std::cout;
using std::endl;

int main ()
{
	vector<int> v; //Our vector class
	std::vector<int> stdv; //Standard vector

	stdv.push_back(1);
	stdv.push_back(2);
	stdv.push_back(3);
	stdv.push_back(4);
	stdv.push_back(5);

	vector<int> temp;
	temp.push_back(120);
	temp.push_back(50000);
	v = temp;
	v.push_back(23);

	for(int i = 0; i < v.size(); i++)
	{
		cout << "[int] Using at(): " << v.at(i) << endl;
		cout << "[int] Using []:" << v[i] << endl;
	}
	cout << endl;

	vector<double> d;
	d.push_back(2.22);
	d.push_back(3.14);
	for(int i = 0; i < d.size(); i++)
	{
		cout << "[double] Using at(): " << d.at(i) << endl;
		cout << "[double] Using [] " << d[i] << endl;
	}
	cout << endl;

	cout << "[double] Size: " << d.size() << ", [double] Capa: " << d.capacity() << endl << endl;

	for (std::vector<int>::iterator it = stdv.begin() ; it != stdv.end(); it++)
	{
		 cout << "std::Iterator in order: " << *it << endl;
	}
	cout << endl;

	for (std::vector<int>::reverse_iterator it = stdv.rbegin() ; it != stdv.rend(); it++)
	{
			 cout << "std::Iterator reverse: " << *it << endl;
	}

	return 0;

}
