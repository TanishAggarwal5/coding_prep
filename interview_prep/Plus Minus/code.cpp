#include <bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for (int i=0; i<x; i++) {
        cin>>arr[i];
    }
    int pos = 0;
    int neg = 0;
    int zer = 0;
    for (int i = 0; i<x; i++) {
        if (arr[i]>0)
            pos++;
        else if(arr[i]<0)
            neg++;
        else 
            zer++;
    }
    float w = float(pos)/float(x);  
    float y = float(neg)/float(x);
    float u = float(zer)/float(x);
    cout<<setprecision(6);
    cout<<w<<endl;
    cout<<y<<endl;
    cout<<u<<endl;
    
    return 0;
}

