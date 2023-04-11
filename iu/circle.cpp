#include "circle.h"
#include <iostream>
using namespace std;

	void Circle::circle(float r, float x, float y) {
	}
	void Circle::set_circle(float r, float x, float y) {
		cout << "¬ведите значение радиуса: ";
		cin >> r;
		cout << "¬ведите значение x координаты: ";
		cin >> x;
		cout << "¬ведите значение y координаты: ";
		cin >> y;
	}
	float Circle::square() {
		float s;
		s = 3.14 * radius * radius;
	}
	bool Circle::triangle_around(float a, float b, float c) {
		return true;
	}
	bool Circle::triangle_in(float a, float b, float c) {
		return true;
	}
	bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
		return ((sqrt((pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2))) < (r + radius)));
	}