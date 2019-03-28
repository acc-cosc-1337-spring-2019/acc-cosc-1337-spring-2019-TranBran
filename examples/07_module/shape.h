#ifndef SHAPE_H
#define SHAPE_H

//h
// shape is an abstract object 
// the shape class is the foundational class
class Shape 
{
public:

	//virtual void draw() this is a virtual function
	virtual void draw() =0; // =0 makes this a pure virtual function

	// for a class to be abstract it needs at least 1 pure virtual function
};




#endif //SHAPE_H