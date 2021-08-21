## [Tower Breakers](https://www.hackerrank.com/challenges/tower-breakers-1/problem)


## Objective
The Problem statement wants to return winner of the game as integer 1 or 2 when both play optimally

## Input 
The first line contains a single integer t , the number of test cases.
Each of the next t lines describes a test case in the form of 2  space-separated integers, n and m .

## Output
int: the winner of the game

## Approach
so in the function we have two parameters n(tnumber of towers) and m(blocks on tower) which are to be used to find winner.
we declare a varaible win in function tower breakers, which we will assign the integer 1 or 2 depending on which player wins.
we use if else statements for it.
condtion for 1:
if we have only one tower and m equal not to 1 , then 1 wins  since he candirectly reduce tower to 1 , or if both towers and blocks on each are odd and m equal not to one
or if number of towers odd but blocks even, then 1 wins as obvious and all this is done because both playerws play optimally and they try to win game as earliest possible
condition for 2:
if only on block then one has no move, 2 wins or if towers are even then also 2 wins




### Time Complexity - O(N)
### Space Complexity - O(constant)
 
<br>

## References
* [Conditional Statements in C++](https://www.w3schools.com/cpp/cpp_conditions.asp)