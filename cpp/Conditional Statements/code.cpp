#include <bits/stdc++.h>                                                                // is basically a header file that includes every standard library.
#include <iostream>

using namespace std;

int main()
{
    string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};  //declaring a string array
    
    //taking input for element index
    int n; 
    cin>>n;

    //if index is in range of array then printing element on that index
    if (n>=1 && n<=9) {
        cout<<a[n];
    
    }
    else
    {
        cout<<"Greater than 9";
    }
    
    return 0;
}

