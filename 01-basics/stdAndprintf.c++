#include <cstdio> // which include the printf function
#include <iostream> // which include the std namespace within that we have cout object

using namespace std;
// printf format specifier

// int type use the %d
// double type use the
// char type use the
// str type use the

int main(){
	printf("Ten %d, twenty %d ", 10, 20);

	// insted of printf we can use the std::cout to print the variables

	std::cout << "\nTen " << 10 << "\n";
	std::cout << "Twenty " << 20 << "\n";

	// instead of using the std every where, we can import the std namespace
	cout << "0 is " << 0 << endl;

	// read input from console cin
	cout << "Enter your x & y ";
	double x;
	double y;
	cin >> x >> y;
	cout << x + y << endl;
	return 0;
}