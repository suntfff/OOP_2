#include <iostream>
#include <char_array.hpp>
int main() {
	msp::char_array a(4);
	msp::char_array b = a;
	msp::char_array c(5);
	c = a;
}
