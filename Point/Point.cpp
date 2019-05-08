#include"Point.h"

Point::Point() {
	xPoint = 0;
	yPoint = 0;
}
Point::Point(int newX, int newY) {
	xPoint = newX;
	yPoint = newY;
}
Point Point::add(const Point& right) {
	int x = xPoint + right.xPoint;
	int y = yPoint + right.yPoint;
	return Point(x,y);
}
Point Point::subtract(const Point& right) {
	int x = xPoint - right.xPoint;
	int y = yPoint - right.yPoint;
	return Point(x, y);
}
string Point::toString() {
	stringstream x1, y1;
	x1 << xPoint;
	y1 << yPoint;
	return "("+x1.str() + "," + y1.str()+")";
}