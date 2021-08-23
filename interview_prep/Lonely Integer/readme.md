## [Lonely Integer](https://www.hackerrank.com/challenges/lonely-integer/problem)


## Objective
The Problem statement wants to return the number whih occurs only once in given vector

## Input 
The first line contains a single integer , n , the number of integers in the array.
The second line contains n space-separated integers that describe the values in a .

## Output
int: the element that occurs only once

## Approach
To solve this problem we will be using counting sort method . First we will create a new vector whose all values will be assigned with 0 initially .
So now as our aim is to find the integer which occurs only once in main vector , we will first iterate through main vetor and every time a value occurs ,
we will increament the value by 1 in vector we created at the same index as that value that occured in main vector. So for example if 2 occurs in main vector , then value at 2nd index in new vector will be increamented by 1 , so this means if 3 occur 4 times in main vector then value at index 3 will be 4 in new vector , and if a number occur once in main vector then value at that index in new vector will be 1 and in this way the index of new vector will give us the number that occured only once in given vector . We can simply return the index .




### Time Complexity - O(N)
### Space Complexity - O(constant)
 
<br>

## References
* [Counting Sort](https://www.geeksforgeeks.org/counting-sort/)