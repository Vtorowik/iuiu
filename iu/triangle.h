#pragma once
class Triangle {
private:
	float a, b, c;
	Triangle(float a1, float b1, float c1) {
		a = a1;
		b = b1;
		c = c1;
	}
public:
	bool exst_tr();
	void set(double a1, double b1, double c1);
	void show();
	double perimetr();
	double square();
};