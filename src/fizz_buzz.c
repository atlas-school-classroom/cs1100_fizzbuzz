#include <stdio.h>

void fizz_buzz(int number) {
    /* Your code here */
    for(int i = 1; i <= number; i++) {
      if (number % 3 == 0 && number % 5 == 0) {
        printf("FizzBuzz\n");
      } else if (number % 3 == 0) {
        printf("Fizz\n");
      } else if (number % 5 == 0) {
        printf("Buzz\n");
      } else {
        printf("%d\n", number);
      }
    }
}