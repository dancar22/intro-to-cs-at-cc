#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {

	private:

		float radius;
		float diameter;
		float circumference;
		float area;

	public:

		Circle();

	public:

		void setRadius (float r);
		void doCalc();
		float getDiameter();
		float getCircumference();
		float getArea();


};

#endif




