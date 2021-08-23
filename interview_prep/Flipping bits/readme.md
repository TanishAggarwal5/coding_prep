## [Flipping bits](https://www.hackerrank.com/challenges/flipping-bits/problem)


## Objective
The Problem statement wants to flip bits of given number and return the decimal number of new binary representation.

## Input 
The first line of the input contains q , the number of queries.
Each of the next q lines contain an integer , n , to process.

## Output
int: the unsigned decimal integer result

## Approach
We will use bitwise not operator to flip the bits and return new decimal form but as by default it will return in signed form which is we may get negetive numbers which works
on principle of 2's complement which is if the first bit which is most signficant bit of number is 1 , then number will be negetive , so we gonna typecast it to unsigned as the problem statement wants us to return unsigned decimal integer.




### Time Complexity - O(constant)
### Space Complexity - O(constant)
 
<br>

## References
* [Bitwise Operators in C/C++](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)
