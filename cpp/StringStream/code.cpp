#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
    vector<int>v;
    stringstream ss(str);
    char ch;
    int i;
    while(ss>>i)
    {
        v.push_back(i);
        ss>>ch;
        
    }
    return v;
   
	// Complete this functio
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] <<endl;
    }
    
    return 0;
}
