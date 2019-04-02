#include "panel.h"
#include<string>

class MyHello
{
public:
	std::string say_hello() { return "John"; }

};


/*
Class Constructor

@param wxWindow* the parent window for the Panel class
*/
//when someone creates a panal it needs to t=give parent
Panel::Panel(wxWindow* parent) 
	: wxPanel(parent, -1)
{
	auto hello_button = new wxButton(this, -1, wxT("Hello"));
	hello_button->Bind(wxEVT_BUTTON, &Panel::on_hello, this); // Binds function to button

}

void Panel::on_hello(wxCommandEvent & event)
{
	MyHello h; // create an instance of Myhello class

	wxLogMessage("Hello world from wxWidgets! " + wxString(h.say_hello()));

}


