#include<iostream>
#include"Point.h"

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	Point point1(x1, y1), point2(x2, y2), point3(x3, y3);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "=";
	cout << point1+point2-point3 << endl;
	system("pause");
}