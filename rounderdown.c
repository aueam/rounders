#include <math.h>

/*
This function rounds the entered numbers only from the function rounder about one number down on the number series:
1,2,5;10,20,50 etc.
input 0 = output 0
very large number = output -1
*/
int rounderdown(int value) {

	if (value == 0) {
		return 0;
	}

	int one_number;
	int two_number;
	int five_number;
	int number_of_digits;
	int pov;
  
	number_of_digits = (int)log10(value);

	pov = pow(10,number_of_digits);

	one_number = 1 * pov;
	two_number = 2 * pov;
	five_number = 5 * pov;

	if (value == one_number) {
		return five_number / 10;
	}

	if (value == two_number) {
		return one_number;
	}

	if (value == five_number) {
		return two_number;
	}

	if (value == one_number * 10) {
		return five_number;
	}

	return -1;
}