#include <stdio.h>

void fizz_buzz(int number) {
  /* This function should take in integers and print Fizz, Buzz, or Fizzbuzz based on the number inputed. 

  For multiples of 3, print "Fizz" instead of the number. For multiples of 5, print "Buzz". 
  For numbers which are multiples of both 3 and 5, print "FizzBuzz".
  */
    for (int i = 1; i <= number; i++) {
        if (i % 3 ==0 && i % 5 ==0) {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}