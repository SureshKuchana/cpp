# c++

C++ is a high-level, general-purpose programming language, was desinged with systems programming & embedded, resource-constrained & large system in mind, with performance, efficiency, & flexibility.

C++ has also been found useful in many other contexts, with key strengths being software infrastructure and resource-constrained applications,including desktop applications, video games, servers (e.g. e-commerce, web search, or databases), and performance-critical applications (e.g. telephone switches or space probes).

In C++, every program contains a main function which is executed automatically when the program is run. Every part of a C++ program is run directly or indirectly from main, and the most basic program that will compile in C++ is just a main function with nothing else. 
main() should return an integer (an int in C++), which indicates if the program exited successfully.
(or)
C++ programs have a single entry point called the main function. An entry point is a function that executes when a user runs a program. Functions are blocks of code that can take inputs, execute some instructions, and return results.

Within main, you call the function printf, which prints the characters
Hello, world! to the console. Then the program exits by returning the
exit code 0 to the operating system. Exit codes are integer values that the operating system uses to determine how well a program ran. zero (0) exit code means the program ran successfully. The printf function is not defined in the program; it’s in the cstdio library.Libraries are helpful code collections you can import into your programs
to prevent having to reinvent the wheel.

```cpp
#include <cstdio> // The cstdio header file contains definitions for C++ for performing input and output. Include the standard header into a C++ program to effectively include the standard header <stdio. h>

int main(){
	printf("Hello, World!"); //formatting function that is used to print a string to stdout
	return 0;
}

```
### The Compiler Tool Chain
After writing the source code for a C++ program, the next step is to turn your source code into an executable program. The compiler tool chain (or tool chain) is a collection of three elements that run one after the other to convert source code into a program:
1. Preprocessor (source code manipulation)
2. Compiler (generates object file)
3. Linker (generate programs from object files)

Preprocessor: performs basic source code manipulation.
for eg: #include <cstdio> is a directive that instructs the preprocessor to include information about the cstdio lib directly into your program's source code. When preprocessor finished processing a source file, it produces a single translation unit. Each translation unit is then passed to the compiler for further processing.

Compiler: reads a translation unit & generates an object file. Object files contain an intermediate format called Object code. These files contain data & instructions in an intermediate format that most humans wouldn't understand. Compilers work on one translation unit at a time, so each translation unit corresponds to a single object file.

Linker: generates programs from object files. Linkers are also
responsible for finding the libraries you’ve included within your
source code.

# To complie the source code or c++ program

```bash
g++ main.cpp // it will generate the executable file
./a.out
```