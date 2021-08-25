#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)    //function to compare
{
    int x = max(a,max(b,max(c,d)));         //using max function inside another max function to get max of more than 2 numbers and flow of this statement is from right to left 

    return x;                               //returning the maximum number
}

int main() {                                //main fucntion

    //input of 4 number to compare
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    //calling function max_of_four to compare and storing in variable ans
    int ans = max_of_four(a, b, c, d);
    //printing ans
    printf("%d", ans);
    
    return 0;
}


