#pragma once

namespace msp {
	class char_array {
		char* s; int size_char_array;
	public:
		char_array(int size_char_array);
		char_array(const char_array& other);
		char_array& operator = (const char_array& other);
		~char_array();
	};
}