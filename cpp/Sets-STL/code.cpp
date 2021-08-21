#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q;
    int k;
    for (int i  = 0; i<k; i++) {
        cin>>q;
        s.insert(q);
        
    }
    int input;
    int z;
    cin>>z;
    for(int i = 0;i<z;i++){
        cin>>input;
        if (input == 1) {
            int y;
            cin>>y;
            s.insert(y);
            
        }
        else if (input == 2) {
            int u;
            cin>>u;
            s.erase(u);
            
        }
        else if (input == 3) {
            int o;
            cin>>o;
            auto it=s.find(o);
            if (it!=s.end()) {
                cout<<"Yes"<<endl;
                
            }
            else {
                cout<<"No"<<endl;
            }
        }
        
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



