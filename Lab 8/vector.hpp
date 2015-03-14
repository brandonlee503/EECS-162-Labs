#ifndef VECTOR_H_
#define VECTOR_H_

#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

template <class T>
class vector
{
private:
	T *v;
	int c;
	int s;

public:

	vector()
	{
		v = NULL;
		c = 0;
		s = 0;
	}

	vector(vector<T> &other)
	{
		delete []this->v;
		this->v = new T[other.c];
		this->s = other.s;
		this->c = other.c;
		*this->v = *other.v;
	}

	void push_back(T ele)
	{
		T *temp=new T[c];

		for(int i=0; i<c; i++)
		{
			temp[i]=v[i];
		}
		delete [] v;

		c++;
		v=new T[c];

		for(int i=0; i<c-1; i++)
		{
			v[i]=temp[i];
		}
		v[c-1]=ele;
		s++;

		delete [] temp;
	}

	void operator=(vector<T> &other)
	{
		delete []this->v;
		this->v = new T[other.c];
		this->s = other.s;
		this->c = other.c;
		*this->v = *other.v;
	}

	T operator[](int i)
	{
		return this->v[i];
	}

	int size()
	{
		return this->s;
	}

	int capacity()
	{
		return this->c;
	}

	T at(int i)
	{
		return this->v[i];
	}

	~vector()
	{
		if(v != NULL) delete [] v;
		v = NULL;
	}
};


#endif /* VECTOR_H_ */
