# Assignment: FizzBuzz

## Introduction

In this assignment you will practice working with loops and conditional statements in the C programming language.

## Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following file:

1. `fizz_buzz.c`

## Instructions
* In the file **fizz_buzz.c**, complete the function **void fizz_buzz(int number)**:
  * Begin by creating a **loop** that is initalized at 1 and increments up to 100. 
    * Inside the loop use **if**, **else if** and **else** statements to check each number.
    * If a number is a factor of 3 and 5, print **fizzbuzz**
    * If a number is a factor of 3 print **fizz**
    * If a number is a factor of 5 print **buzz**
    * If none of the conditions are true, print the number

## Rubric 
| Test Name | Possible Score |
| ----------- | ----------- |
| Test 1 - Prints 1 through 3 | 12.5 |
| Test 2 - Prints 1 through 5 | 12.5 |
| Test 3 - Prints 1 through 15 | 12.5 |
| Test 4 - Prints 1 through 17 | 12.5 |
| **Total** | **50** |

## Review Format
This assignment is **auto reveiwed** meaning that your grade will reflect your code passing the test items above. Each test calls your **void fizz_buzz(int number)** function, in order for each test to run it is important that you do not alter the name of the functions provided to you in the **src** folder. 

Tests are run from the **.github** folder, in order to perserve the integretiy of the autograder and to uphold academic integrety, it is important that you do NOT alter any of the code in the **.github** folder. Altering code inside the **.github** folder will trigger a flag on your Github account and your instructor(s) will be notified of the violation to academic integrity. 

## Run Checks
To check your work, run the following command:

```bash
$ make checker
```
This will run the tests and output the results.

### Terminal Output 
If all checks pass, you will see the following output:

```bash
1/4 Test 1 - Prints 1 through 3         OK              0.01s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz


Actual output:
1
2
Fizz

../.github/checker/tests/test_1/test_1.c:13:test_1:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Prints 1 through 5         OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz


Actual output:
1
2
Fizz
4
Buzz

../.github/checker/tests/test_2/test_2.c:13:test_2:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Prints 1 through 15        OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz


Actual output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz

../.github/checker/tests/test_3/test_3.c:13:test_3:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Prints 1 through 17        OK              0.00s
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17


Actual output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17

../.github/checker/tests/test_4/test_4.c:13:test_4:PASS

-----------------------
1 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Ok:                 4   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```
If there are failing checks you will see summary of the failing tests, for example:
```bash
1/4 Test 1 - Prints 1 through 3         FAIL            0.01s   exit status 1
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz


Actual output:
Fizz
Fizz
Fizz

../.github/checker/tests/test_1/test_1.c:36:test_1:FAIL: Expected '1\n2\nFizz\n' Was 'Fizz\nFizz\nFizz\n'

-----------------------
1 Tests 1 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/4 Test 2 - Prints 1 through 5         FAIL            0.00s   exit status 1
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz


Actual output:
Buzz
Buzz
Buzz
Buzz
Buzz

../.github/checker/tests/test_2/test_2.c:36:test_2:FAIL: Expected '1\n2\nFizz\n4\nBuzz\n' Was 'Buzz\nBuzz\nBuzz\nBuzz\nBuzz\n'

-----------------------
1 Tests 1 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/4 Test 3 - Prints 1 through 15        FAIL            0.00s   exit status 1
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz


Actual output:
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz
FizzBuzz

../.github/checker/tests/test_3/test_3.c:36:test_3:FAIL: Expected '1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n' Was 'FizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\nFizzBuzz\n'

-----------------------
1 Tests 1 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

4/4 Test 4 - Prints 1 through 17        FAIL            0.00s   exit status 1
―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17


Actual output:
17
17
17
17
17
17
17
17
17
17
17
17
17
17
17
17
17

../.github/checker/tests/test_4/test_4.c:36:test_4:FAIL: Expected '1\n2\nFizz\n4\nBuzz\nFizz\n7\n8\nFizz\nBuzz\n11\nFizz\n13\n14\nFizzBuzz\n16\n17\n' Was '17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n17\n'

-----------------------
1 Tests 1 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Summary of Failures:

1/4 Test 1 - Prints 1 through 3             FAIL            0.01s   exit status 3
2/4 Test 2 - Prints 1 through 5             FAIL            0.00s   exit status 1
3/4 Test 3 - Prints 1 through 15            FAIL            0.00s   exit status 4
4/4 Test 4 - Prints 1 through 17            FAIL            0.00s   exit status 2

Ok:                 0   
Expected Fail:      0   
Fail:               4   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0 
```
### Github Output
If all checks pass, you will see the following output:

```bash
✅ Test 1 - Prints 1 through 3
Expected output:
1
2
Fizz

Actual output:
1
2
Fizz

../.github/checker/tests/test_1/test_1.c:13:test_1:PASS

1 Tests 0 Failures 0 Ignored
OK
---
✅ Test 2 - Prints 1 through 5
Expected output:
1
2
Fizz
4
Buzz

Actual output:
1
2
Fizz
4
Buzz

../.github/checker/tests/test_2/test_2.c:13:test_2:PASS

1 Tests 0 Failures 0 Ignored
OK
---
✅ Test 3 - Prints 1 through 15
Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz

Actual output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz

../.github/checker/tests/test_3/test_3.c:13:test_3:PASS

1 Tests 0 Failures 0 Ignored
OK
---
✅ Test 4 - Prints 1 through 17
Expected output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17

Actual output:
1
2
Fizz
4
Buzz
Fizz
7
8
Fizz
Buzz
11
Fizz
13
14
FizzBuzz
16
17

../.github/checker/tests/test_4/test_4.c:13:test_4:PASS

1 Tests 0 Failures 0 Ignored
OK
---

Ok:                 4
Expected Fail:      0
Fail:               0
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```

If there are failing checks you will see summary of the failing tests:

```
❌ Test 1 - Max of positive numbers
../.github/checker/tests/test_1.c:13:test_1:FAIL: Expected 3 Was 1

❌ Test 2 - Max of negative numbers
../.github/checker/tests/test_2.c:14:test_2:FAIL: Expected -2 Was -4

❌ Test 3 - Max of positive and negative numbers
../.github/checker/tests/test_3.c:14:test_3:FAIL: Expected 4 Was 3

❌ Test 4 - Max of repeating numbers
../.github/checker/tests/test_4.c:14:test_4:FAIL: Expected 1 Was 0

Summary of Failures:

1/4 Test 1 - Max of positive numbers                          FAIL            0.14s   exit status 2
2/4 Test 2 - Max of negative numbers                          FAIL            0.25s   exit status 2
3/4 Test 3 - Max of positive and negative numbers             FAIL            0.35s   exit status 2
4/4 Test 4 - Max of repeating numbers                         FAIL            0.46s   exit status 2

Ok:                 0
Expected Fail:      0
Fail:               4
Unexpected Pass:    0
Skipped:            0
Timeout:            0
```
