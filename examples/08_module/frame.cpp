#include "frame.h"
#include "panel.h"
//initializer list

Frame::Frame() 
	: wxFrame(NULL, wxID_ANY, "Hello World!", wxDefaultPosition, wxSize(400, 300))
{
	//this refers to itself
	auto panel = new Panel(this);
}