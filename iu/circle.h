
#pragma once
class Circle {
	float radius;
	float x_center;
	float y_center;
	Circle(float r, float x, float y) {
		radius = r;
		x_center = x;
		y_center = y;
    }
public:

	void circle(float r, float x, float y);
	void set_circle(float r, float x, float y);
	float square();
	bool triangle_around(float a, float b, float c);
	bool triangle_in(float a, float b, float c);
    bool check_circle(float r, float x_cntr, float y_cntr);
};
int main();