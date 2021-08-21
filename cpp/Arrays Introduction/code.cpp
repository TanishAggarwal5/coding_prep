#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { // main function
    // n for declaring array of size N
    int N; 
    cin>>N;

    //array creation
    int a[N];
    
    //storing values in array
    for (int i=0 ; i<N ; i++) {
        cin>>a[i];
    }
    
    //running array index from back to print array in reverse order
    for (int i=N-1 ; i>=0 ; i--) {
        cout<<a[i]<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
