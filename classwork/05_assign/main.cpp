#include "rectangle.h"
#include<iostream>
#include <vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/

int main() 
{
	std::vector <Rectangle> rectangles;
	Rectangle area(4, 5, 20);
	Rectangle area1(10, 10, 100);
	Rectangle area2(100, 10, 1000);

	rectangles.push_back(area);
	rectangles.push_back(area1);
	rectangles.push_back(area2);

	for (auto Area : rectangles)
	{

		std::cout << Area.Get_Area << "\n";

	}


	
	return 0;
}