#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,y;
    cin>>s>>y;
    int len = s.size();
    int len1 = y.size();
    cout<<len<<" "<<len1<<endl;
    string c = s + y;
    cout<<c<<endl;
    char temp = s[0];
    s[0]=y[0];
    y[0]=temp;
    cout<<s<<" "<<y;
    
    
    
    
	// Complete the program
  
    return 0;
}
