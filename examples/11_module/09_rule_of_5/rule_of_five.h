//
#include <iostream>;

class RuleOfFive
{
public:
	RuleOfFive(int n) : num(n) { ptr_num = new int(n); }
	RuleOfFive(const RuleOfFive& d);
	RuleOfFive& operator=(RuleOfFive& d); // copy assignment - rule of 3
	RuleOfFive(RuleOfFive&& r); // move constructor
	RuleOfFive& operator=(RuleOfFive&& r);
	~RuleOfFive(); // Rule of 3
	void set_value(int n);
	int get_value();
	
	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	
	int* ptr_num;
};