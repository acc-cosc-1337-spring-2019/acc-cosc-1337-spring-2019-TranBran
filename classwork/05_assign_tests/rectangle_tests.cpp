#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Create a test case to test the Rectangle class with following values:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

*/

TEST_CASE("Test Rectangles")
{
	/*
	Rectangle area(4, 5, 20);
	area.calculate_area(4, 5);
	REQUIRE(area.Get_Area() == 20);

	Rectangle area(10, 10, 100);
	area.calculate_area(10, 10);
	REQUIRE(area.Get_Area() == 100);

	Rectangle area(100, 10, 1000);
	area.calculate_area(100, 10);
	REQUIRE(area.Get_Area() == 1000);
	*/

}
