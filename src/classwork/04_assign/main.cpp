//write includes statements
#include<iostream>
#include"loops.h"



//write using statements for cin and cout
using std::cout;	using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 

{
	char choice;

	do{
		
		cout<<"Enter a number between 1 and 10: "<<"\n";
		int num;
		int total;
		cin>>num;


		while(!(num >=1 && num <=10))
		{
			cout<<"Out of range, pick between 1 - 10\n";
			cout<<"Enter a number between 1 and 10: "<<"\n";
			cin>>num;

		}
			
		total = factorial(num);
		cout<<"Factorial number for "<<num<<" is: "<<total<<"\n";

		cout<<"Continue? press any key or 'n' to exit the program\n";
		cin>>choice;


	}while(choice != 'n');

	return 0;
}