#ifndef  SHAPE_H
#define SHAPE_H
#include<wx/wx.h>

class Shape
{
public:

	Shape(wxDC* dc) : device_context(dc) {}
	virtual void draw() = 0; // each derived class wil provide its own draw functionality

protected:

	wxDC* device_context;
};

#endif // SHAPE_H