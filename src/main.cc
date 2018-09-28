/**
* CS V15 Data Structures and Algorithms
* CRN: ????
* Assignment: Fibonacci
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Matthew Sandstrom
*/
#include <iostream>
#include "fibonacci.h"

using edu::vcccd::vc::csv15::fibonacci;
using std::cout;
using std::endl;
int main(int argc, char *argv[]) {
	int64_t index = fibonacci(9);

	cout << "The value is " << index << endl;
}