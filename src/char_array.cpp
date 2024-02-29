#include <char_array.hpp>
#include <iostream>
using namespace std;

namespace msp {
	char_array::char_array(int size_char_array) {
		if (size_char_array > 0) {
			cout << "constr  " << this << endl;
			this->size_char_array = size_char_array;
			this->s = new char[size_char_array];
			for (int i = 0; i < size_char_array; i++) {
				cin >> this->s[i];
			}
		}
		else {
			cout << "error" << endl;
		}
	}
	char_array::char_array(const char_array& other) {
		cout << "constr copy  " << this << endl;
		this->size_char_array = other.size_char_array;
		this->s = new char[other.size_char_array];
		for (int i = 0; i < other.size_char_array; i++) {
			this->s[i] = other.s[i];
		}
	}
	char_array& char_array::operator=(const char_array& other){
		cout << "operator =  " << this << endl;
		delete[] this->s;
		this->s = new char[other.size_char_array];
		this->size_char_array = other.size_char_array;
		for (int i = 0; i < other.size_char_array; i++) {
			this->s[i] = other.s[i];
		}
		return *this;
	}
	char_array::~char_array() {
		cout << "desrt" << this << endl;
		delete[] s;
	}
}