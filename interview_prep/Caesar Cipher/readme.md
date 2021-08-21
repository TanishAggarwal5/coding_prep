## [Caesar Cipher](https://www.hackerrank.com/challenges/caesar-cipher-1/problem)


## Objective
The Problem statement wants to return updated string after shfiting only letters in string by updating letters by letter which is a given integer  ahead

## Input 
The  line contains the unencrypted string s given as parameter .
The  line contains k , the number of letters to rotate the alphabet by, also given as parameter.

## Output
string : updated string after performing the changes in letters

## Approach
As a beginner someone will think to store the string in a vector then update the values but in that case we have to take care of symbols as well which is a bit hectic task.
so instead we will directly update the values in string by iterating through string using for loop.
but we cant just add k to ascii value of given letter and print char of new ascii value because once we reach z, then instead of going back to a we will go beyond it.
lines 27,34 in code cpp works for rotation and updation of  upper case letters and 29,38 for lower case.
lets understand upper case:
since we have 26 letters in alphabets,code in line 27 will give us value of letter from 0-25 after adding k to ascii of initial letter .Then in line 34 we will do the rotation and updation, for roation we will divide the value from 0-25 with 26 and remainder will give us how many letters from 65 our final letter will be ahead and if value of z will be less than 26 then it means we are before z but if it reaches ahead of 26 lets say 27 then we will get 1 as remainder , then after adding it to 65 we will get ascii of number to be updated and we can print character value of it and the division with 26 helped us in rotation if we reach z.
same for lower case  with different ascii values 




### Time Complexity - O(N)
### Space Complexity - O(constant)
 
<br>

## References
* [Typecasting in C++](https://www.tutorialspoint.com/how-do-i-convert-a-char-to-an-int-in-c-and-cplusplus)