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
	Point add(const Point&);
	Point subtract(const Point&);
	string toString();
};


#endif
