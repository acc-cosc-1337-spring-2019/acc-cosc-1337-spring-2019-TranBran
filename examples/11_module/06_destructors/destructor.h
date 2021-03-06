//
class Destructor
{
public:
	Destructor(int n) : num(n) { ptr_num = new int(n); }
	Destructor(const Destructor& d);
	Destructor& operator=(Destructor& d); // copy assignment - rule of 3
	~Destructor(); // Rule of 3
	void set_value(int n);
	int get_value();
	
	void set_ptr_num(int n);
	int* get_ptr_num();
private:
	int num;
	
	int* ptr_num;
};