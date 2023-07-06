#include <iostream>
#include "Header.h"
#include <fstream>

using namespace std;

void Point::print() const
{
	cout << "X :: " << x << endl;
	cout << "Y :: " << y << endl;
	cout << "Z :: " << z << endl;
}

Point::Point(const size_t& x, const size_t& y, const size_t& z)
{
	setX(x);
	setY(y);
	setZ(z);
}

void fileOpenWrite(string& path, Point& point)
{
	ofstream fout;
	fout.open(path, ofstream::app);
	if (fout.is_open()) {
		cout << "Writing: " << endl;
		fout.write((char*)&point, sizeof(Point));
	}
	else {
		cout << "Erorr!" << endl;
	}
	fout.close();
}

void fileOpenRead(string& path)
{
	ifstream fin;
	fin.open(path);
	if (fin.is_open()) {
		cout << "Reading: " << endl;
		Point pnt;
		while (fin.read((char*)&pnt, sizeof(Point))) {
			pnt.print();
		}
	}
	else {
		cout << "Erorr!" << endl;
	}
	fin.close();
}

int main()
{
	string path = "myFile.txt";
	Point point;
	int x;
	int y;
	int z;
	point.print();
	cout << "\n\n=================================\n";
	cout << "Input your numbers :: " << endl;
	cout << "Input X  :: "; cin >> x; 
	cout << "Input Y  :: "; cin >> y;
	cout << "Input Z  :: "; cin >> z;
	Point* point2=new Point(x, y, z);
	point2->print();
	fileOpenWrite(path, point);
	fileOpenRead(path);

	return 0;
}