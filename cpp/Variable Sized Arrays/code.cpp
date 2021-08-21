#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    cin >> n >> q;
    int** outer = new int*[n];
    for(int i = 0; i < n; i++) {
        int k;
        cin>>k;
        outer[i] = new int[k];
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;
        
        // Find the variable-length array located at outer_index
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
