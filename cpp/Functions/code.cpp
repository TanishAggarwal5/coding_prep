#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)   //function to compare
{
    if(a>b && a>c && a>d)
        return a;                          //return a if its greater than every other number
    
    else if(b>c && b>d)
        return b;                          //if a not greatest then compare  next number with remaining numbers
    
    else if (c>d) 
        return c;                          //if b not greatest then compare  next number with remaining numbers 
    
    else
        return d;                          //in end if none of first three is greatest than result is d only
}

int main() {                               //main fucntion

    //input of 4 number to compare
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    //calling function max_of_four to compare and storing in variable ans
    int ans = max_of_four(a, b, c, d);
    //printing ans
    printf("%d", ans);
    
    return 0;
}


