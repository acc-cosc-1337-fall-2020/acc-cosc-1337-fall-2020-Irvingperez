//write include statements
#include<iostream>
#include<string>
#include"dna.h"

//write using statements
using std::cout;	using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char continue_yes_or_no;
	int prompt;
	string dna;
	double result_gc;
	string result_complement;
	
cout<<"Type 'Y' to continue: ";
  cin>>continue_yes_or_no;

  while(continue_yes_or_no == 'y' || continue_yes_or_no == 'Y')
  {
	  cout<<"Options: Press 1 for GC content or Press 2 for DNA complement: ";
	  cin>>prompt;
	
    if (prompt == 1)
    {
      cout<<"Enter the DNA information : ";
      cin>>dna;
      result_gc = get_gc_content(dna);
      cout<<"The GC result is: "<<result_gc<<'\n';
      cout<<"Pres 'Y' to start over or any key to exit. ";
      cin>>continue_yes_or_no;
    }

    else if (prompt == 2)
    {
      cout<<"Enter the DNA information: ";
      cin>>dna;
      result_complement = get_dna_complement(dna);
      cout<<"The complement is: "<<result_complement<<'\n';
      cout<<"Pres 'Y' to start over or any key to exit.  ";
      cin>>continue_yes_or_no;
    }

    else
    {
      cout<<"Option does not exist  ";
      
    }
  }

	return 0;
}