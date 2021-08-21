#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
     int n;
    cin >> n;
    map<string,int>m;
    for(int i=0;i<n;i++){
        int n1,y;
        string z;
        cin >> n1 ;
        if(n1 == 1){
            cin >> z >> y;
            if(!m.empty())
                m[z] +=y;
            else
                m.insert(make_pair(z,y));
        }
        else if(n1==2){
            cin >> z;
            m.erase(z);
        }
        else{
            cin >> z;
            cout << m[z] << endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



