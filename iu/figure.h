#pragma once
class Figure {
private:
	float x1, x2, x3, x4;
	float y1, y2, y2, y4;
	float S, P;
	Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {

	}
public:
	void Show() {};
	bool is_prug() {};
	bool is_square() {};
	bool is_romb() {};
	bool is_in_circle() {};
	bool is_out_circle() {};
};