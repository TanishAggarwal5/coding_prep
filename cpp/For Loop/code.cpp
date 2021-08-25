#include <iostream>   //header file
#include <cstdio>
using namespace std;

int main() {          //start of main function
     
    //declaring string array
    string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    //two positive integers as input
    int x,y;
    cin>>x>>y;
    
    //in the interval range running the loop
    for (int i=x; i<=y; i++) 
    {
        //print element at that index if number is between 1-9
        if ((i > 0) && (i < 10))
            cout<<a[i]<<endl;
        
        //printing even if number is even   
        else if (i%2==0) {
            cout<<"even"<<endl;
        }
        
        //else odd
        else 
        {
            cout<<"odd"<<endl;
        }
    }
    
    return 0;
}
