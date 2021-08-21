#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> j;
    int x;
    cin>>x;
    int input;
    for (int i = 0; i<x; i++) {
        cin>>input;
        j.push_back(input);    
    }
    sort(j.begin(),j.end());
    for (int i = 0; i<j.size(); i++) {
        cout<<j[i]<<" ";  
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

