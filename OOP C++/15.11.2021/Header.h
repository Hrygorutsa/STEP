#pragma once
#include <string>;
using std::cout;
using std::endl;
using std::string;
class Point
{
public:
	const size_t getX() const;
	const size_t getY() const;
	const size_t getZ() const;
	

	void setX(const size_t& x);
	void setY(const size_t& y);
	void setZ(const size_t& z);

	void print() const;

	Point() :Point(0, 0, 0) { cout << "Defaulte ctor ::" << endl; }
	Point(const size_t& x, const size_t& y, const size_t& z);

	
	private:
		int x = 0;
		int y = 0;
		int z = 0;
};

inline const size_t Point::getX() const
{
	return x;
}

inline const size_t Point::getY() const
{
	return y;
}

inline const size_t Point::getZ() const
{
	return z;
}


inline void Point::setX(const size_t& x)
{
	this->x = x;
}

inline void Point::setY(const size_t& y)
{
	this->y = y;
}

inline void Point::setZ(const size_t& z)
{
	this->z = z;
}

