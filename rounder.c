#include <math.h>
#include <limits.h>

/*
This function rounds the entered numbers 0 to INT_MAX up to the lowest possible number on the number series:
1,2,5;10,20,50 etc.
input 0 = output 0
very large number, negative number = output -1
*/
int rounder(double value) {

  int one_number;
  int two_number;
  int five_number;
  int number_of_digits;
  int pov;
  
  if (value > INT_MAX || value < 0) {
    return -1;
  }

  number_of_digits = (int)log10(value);

  pov = pow(10,number_of_digits);

  one_number = 1 * pov;
  two_number = 2 * pov;
  five_number = 5 * pov;

  if (value <= one_number) {
    return one_number;
  }

  if (value <= two_number) {
    return two_number;
  }

  if (value <= five_number) {
    return five_number;
  }

  return one_number * 10;
}