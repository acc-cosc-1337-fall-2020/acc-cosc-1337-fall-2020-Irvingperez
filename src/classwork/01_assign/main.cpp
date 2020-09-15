//Write the include statement for types.h here
#include<iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
using std::cout;	using std::cin;	


int main() 
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<num;
	int result = multiply_numbers(num);
	cout<<"Result is:  "<<result;
	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"\nResult is:  "<<result;

	return 0;
}

