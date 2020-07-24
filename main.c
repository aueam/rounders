#include <stdio.h>
#include <stdlib.h>

int main() {

    long long hiden_entered_number;
    long long entered_number;
    long long one_number = 1;
    long long two_number = 2;
    long long five_number = 5;
    long long ten_number = 10;

    int number_of_digits = 0;
    int number_of_digits_one;
    int number_of_digits_two;
    int number_of_digits_five;
    int number_of_digits_ten;

    printf("value of purchase: ");
    scanf("%lld", &hiden_entered_number);

    entered_number = hiden_entered_number;

    if (hiden_entered_number >= 999999999999999999) {
        printf("too big number :D\n");
        return 0;
    }

    if (entered_number == 1) {

      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");

      printf("pay by this: %lld\n", entered_number);
      exit(EXIT_SUCCESS);

    }

    while (hiden_entered_number != 0) {
        hiden_entered_number /= 10;
        ++number_of_digits;
    }

    number_of_digits = number_of_digits - 1;
    //printf("number_of_digits: %d\n", number_of_digits);

    number_of_digits_one = number_of_digits;
    //printf("number_of_digits_one: %d\n", number_of_digits_one);

    number_of_digits_two = number_of_digits;
    //printf("number_of_digits_two: %d\n", number_of_digits_two);

    number_of_digits_five = number_of_digits;
    //printf("number_of_digits_five: %d\n", number_of_digits_five);
    
    number_of_digits_ten = number_of_digits;
    //printf("number_of_digits_ten: %d\n", number_of_digits_ten);

    printf("\n");

    for( ; number_of_digits_one > 0; --number_of_digits_one ) {

      one_number *= 10;
      //printf("one_number: %lld \n", one_number);

    }

    printf("\n");

    for( ; number_of_digits_two > 0; --number_of_digits_two ) {

      two_number *= 10;
      //printf("two_number: %lld \n", two_number);

    }

    printf("\n");

    for( ; number_of_digits_five > 0; --number_of_digits_five ) {

      five_number *= 10;
      //printf("five_number: %lld \n", five_number);

    }

    printf("\n");

    for( ; number_of_digits_ten > 0; --number_of_digits_ten ) {

      ten_number *= 10;
      //printf("ten_number: %lld \n", ten_number);

    }

    printf("\n");

    if ( entered_number < one_number ) {

      printf("pay by this: %lld\n", one_number);
      exit(EXIT_SUCCESS);
     
    }

    if ( entered_number < two_number ) {

      printf("pay by this: %lld\n", two_number);
      exit(EXIT_SUCCESS);
     
    }

    if ( entered_number < five_number ) {

      printf("pay by this: %lld\n", five_number);
      exit(EXIT_SUCCESS);
     
    }

    if ( entered_number < ten_number ) {

      printf("pay by this: %lld\n", ten_number);
      exit(EXIT_SUCCESS);
     
    }

}