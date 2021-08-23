#include <bits/stdc++.h>
#include<iostream>


using namespace std;
int main(){
    long int arr[5];
    for (int i = 0; i<5; i++) {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {        
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                long int temp  =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    long int min = 0;
    long int max = 0;
    for (int i = 0;i<4 ;i++) {
            min = min + arr[i];
    
    }
     for (int i = 4;i>0 ;i--) {
            max = max + arr[i];
    
    }
    cout<<min<<" "<<max;
    return 0;
}
