#include<iostream>
#include"Point.h"

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Point point1(x1,y1), point2(x2,y2), point3(x3,y3);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "=";
	point1 = point1.add(point2);
	point1 = point1.subtract(point3);
	cout << point1.toString()<<endl;
	system("pause");
}