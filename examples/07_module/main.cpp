//main
#include "shape.h"
#include "line.h"
#include <vector>
#include "circle.h"
#include<iostream>
#include <memory> // inlclude memory when using smart pointers

int main() 
{
	//Shape s;
	//s.draw();
	// this will allow you to call the original draw function

	//Shape s abstract; error cannot create an instance of an abstract class

	Shape* line = new Line(); // creates a dynamic memory (heap)
	// ^calls the base classes function 
	// When the draw function is virtual it allows the draw function to take many forms "polymorphism"
	// so it will then print draw line

	//Line* line = new Line(); // creates a dynamic memory (heap)
	// ^ calls the Line draw function
	// when the original draw function is not virtual

	line->draw(); // displays draw shape when draw is 

	delete line; // make sure to release the memory

	// uses a vector of shape point to the Line and Circle classes
	std::vector<Shape*> shapes{ new Line(), new Circle() }; // using a vector will automatically release the memory


	for (auto& shape : shapes)
	{


		shape->draw();
		// will display draw line then draw shape


	}

	std::cout << "\n";
	// points to shape and will print the draw line and draw circle as well 
	for (auto * shape : shapes)
	{
		shape->draw();
	}

	std::cout << "\n";

	//Shape instance using smart pointer
	std::unique_ptr <Shape> l = std::make_unique<Line>(); // this creates a smart pointer to line object
	l->draw();

	// smart pointers create and release memory by itself

	std::cout << "\n";

	// create a vector of smart pointers
	//vector of shape instances using smart pointers
	std::vector <std::unique_ptr < Shape >> shaps;
	shaps.push_back(std::make_unique< Line >()); // must use make unique
	shaps.push_back(std::make_unique< Circle >());

	for (auto & shape : shaps)
	{
		shape->draw();
	}

	return 0;
}