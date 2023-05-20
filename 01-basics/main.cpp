#include <iostream>

int main(){
	int a = 1;
	int b = 2;
	int temp;
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
	return 0; // terminate safetly
}