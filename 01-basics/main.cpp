#include <iostream>

int main(){
	int a = 1;
	int b = 2;
	int temp;
	// swap the logic
	temp = a;
	a = b;
	b = temp;
	std::cout << "a \t";
	std::cout << a;
	std::cout << "\n";
	std::cout << "b \t";
	std::cout << b;
	std::cout << "\n";
	// std::cout << "Hello \n"; // std library, char out 
	// std::cout << file_size; // std library, char out 
	// std::cout << "\n";

	double d1 = 1.200000f;
	double d2 = 1.200000;
	bool boolean = false;
	bool boolean1 = true;
	std::cout << "float " << d1 << "\n";
	std::cout << "double " << d2 << "\n";
	std::cout << "boolean false === 0" << boolean << "\n";
	std::cout << "boolean true === 1" << boolean << "\n";
	return 0; // terminate safetly
}