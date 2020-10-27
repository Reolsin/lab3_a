#ifndef _HEX_H_
#define _HEX_H_

#include <iostream>

namespace lab3 {
	class Hex {
	private:
		static const int SZ = 10;
		int len;
		char hex[SZ+2];
		char form_sm[SZ * 4 + 2];
		char form_1[SZ * 4 + 2];
		char form_2[SZ * 4 + 2];
		int set_forms();
		int set_hex(char *hex_value);
		int set_forms_backwards();
	public:
		//constructors
		Hex();
		Hex(char *hex_value);
		Hex(int hex_value);
		//setters
		Hex& input(std::istream&);

		Hex& shift_left(int n);

		Hex& shift_right(int n, int condition=0);


		//getters
		void getHex(char *) const;
		void get_form_sm(char*) const;
		void get_form_1(char*) const;
		void get_form_2(char*) const;
	
		std::ostream & print(std::ostream&) const;

		Hex add(Hex b) const;
		Hex& operator +(Hex) const;

		Hex subtract(Hex b) const;
		Hex& operator -(Hex) const;

		int comp(Hex b) const;
		int is_even() const;
	};
	char int_to_hex(int value);
	int hex_to_int(char value);
	int hex_to_binary(char hex_value);
	char binary_to_hex(int binary_value);
}

#endif
