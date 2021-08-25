#include <iostream>                     //header file for input output
#include <cstdio>
#include <iomanip>                      // file form manipulating like set precision
using namespace std;

int main() { // start of main

    int a;                              //declaring 5 variablesof different types as per question 
                                        //a is integer 4 bytes
                                        //b is long integer  8bytes
                                        //c is character 1 byte
                                        //d is floating type
    long b;                             // e is double

    char c;
                                     
    float  d;

    double e;
    
    cin>>a>>b>>c>>d>>e;                  //taking input

    //printing in different lines
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
                                         // header file used for it is iomanip
    cout<<setprecision(8)<<d<<endl;      // setprecision is used to set precision of digits in number to get answer upto required decimal palces
    cout<<setprecision(10)<<e<<endl;
        
    // Complete the code.
    return 0;
}
