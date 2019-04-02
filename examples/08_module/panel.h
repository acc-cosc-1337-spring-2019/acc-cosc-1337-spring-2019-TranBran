#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>

//creates classs Panel that inherits from wxpanel
class Panel : public wxPanel
{
public:
	//class needs to know parent
	Panel(wxWindow* parent);
	
private:
	void on_hello(wxCommandEvent & event);

};

#endif // !PANEL_H
