#include <iostream>

using namespace std;
// Fundamental types
// Fundamental types are the most basic types of objects, includes
// integer, floating-point, character, boolean, byte

// 4 types of data types in c++ lang
// Basic data type    		=:> int, char, float, double
// Derived data type 		=:> array, pointer
// Enumeration data type 	=:> enum
// User defined data type 	=:> structure

// Type       | Bytes  | Range
// short      	2        
// int        	4        
// long       	2        
// long long  	2        
// float      	4        
// double     	8        
// long double  8        
// bool         1        
// char         1        

// constants
int main(){
	int two = 2;
	const int three = 3; // if we assign any varible with const, we cannot change the value
	// below re-assigning value will throw the error due to the const keyword
	// In function ‘int main()’:
	// error: assignment of read-only variable ‘three’
	// three = 4; // remove comment to see the error in the terminal

	double price = 12.232;
	float interestRate = 1.3F;
	long file = 9000L;
	char word = 'a'; // char should be single quotes
	bool isValid = false;

	// we can assinge variable without the extact type, i.e auto keyword
	// it will infer the type while in the compling time
	auto num = 0.0F;

	int number = 1.2;
	cout << number;
	// another way to initialize
	int square {}; // automatically assign to 0 value
	int doubleSquare {20};
	return 0;
}