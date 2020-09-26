//Write the include statement for decisions.h here
#include"decision.h"
#include<iostream>
//Write namespace using statements for cout and cin
using std::cin;
using std::cout;

int main() 
{
	int grade;

	cout<<"Enter a grade: ";
	cin>>grade;

	if (grade<101 && grade>=0)
	{
		cout<<"\n Grade for "<<grade<<" is: "<<get_letter_grade_using_if(grade)<<" using IF function\n";
		cout<<"\n Grade for "<<grade<<" is: "<<get_letter_grade_using_switch(grade)<<" using SWITCH function\n";
		
	}
	else 
	{
		cout<<"Wrong value / out of range";
	}
		return 0;
}

