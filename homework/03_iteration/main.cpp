#include<dna.h>
#include<iostream>

using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int menu;
	char c;
	std::string dna;

	do 
	{
		cout << "Enter 1 for GC or 2 for DNA Complement: ";
		cin >> menu;
		cout << "Enter DNA string: \n";
		cin >> dna;

		if (menu == 1) 
		{
			cout << "GC content: " << get_gc_content(dna)<<"\n";
		}
		else 
		{
			cout << "DNA Complement: " << get_dna_complement(dna)<<"\n";
		}
	
		cout << "Continue y: ";
		cin >> c;

	} while (c == 'y' || c == 'Y');

	return 0;
}