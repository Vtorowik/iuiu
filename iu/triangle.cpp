#include "triangle.h"
#include <iostream>
using namespace std;


	bool Triangle::exst_tr() {
		if (a + b > c and a + c > b and c + b > a) {
			return true;
		}
		else {
			return false;
		}
	}
	void Triangle::set(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}
	void Triangle::show() {
		cout << "Сторона a = " << a;
		cout << "Сторона b = " << b;
		cout << "Сторона c = " << c;
	}
	double Triangle::perimetr() {
		double P;
		P = a + b + c;
		return P;
	}
	double Triangle::square() {

	}

