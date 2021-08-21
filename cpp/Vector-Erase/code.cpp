#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> j;
    int x;
    int input;
    cin>>x;
    for (int i = 0; i<x; i++) {
        cin>>input;
        j.push_back(input);
    }
    int w;
    cin>>w;
    for (int i = 0; i<j.size(); i++) {
        if (i+1== w) {
            j.erase(j.begin()+i);
        }
    }
    
    
    int start,t;
    cin>>start>>t;
    j.erase(j.begin()+start-1,j.begin() + t-1 );
    cout<<j.size()<<endl;
    for (int i = 0; i< j.size(); i++) 
    {
        cout<<j[i]<<" ";
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
