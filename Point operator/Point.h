#ifndef POINT_H
#define POINT_H
#include <string>
#include<sstream>
using namespace std;

class Point {
private:
	int xPoint, yPoint;
public:
	Point();
	Point(int, int);
	Point add(const Point&) const;
	Point subtract(const Point&) const;
	Point operator+(const Point&) const;
	Point operator-(const Point&) const;
	friend ostream& operator<<(ostream &, const Point&);
	string toString();
};


#endif
