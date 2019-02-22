#include "rectangle.h"
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/
Rectangle::Rectangle(int width, int height, int area):
Width(width ), Height(height),Area(area)
{
}
	

int Rectangle::Get_Area(int width, int height) const
{

	return Area;

}

void Rectangle::calculate_area(int width, int height)
{
	Area = width * height;

}
