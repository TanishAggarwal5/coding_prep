#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    
    if ( s[8]=='P'|| s[8]=='p' ) {
        if (s[0]=='1' && s[1]=='2')  {
            return s.substr(0,8);
        }
        else {
            
    
        
        
       
            int hr= (s[0]-'0')*10 + (s[1]-'0');
            hr += 12;  //21
            s[0]= (hr/10) +'0';
            s[1] = (hr%10) +'0';
       
            string s1 = s.substr(0,8);
            return s1;
        }
        
    }
    else if(s[8]=='A')
    {
        if (s[0]=='1' && s[1]=='2')  {
            s[0]='0';
            s[1]='0';
            string s5 = s.substr(0,8);
            
            return s5;
        }
        else{ 
            string s4 =s.substr(0,8);
            return  s4;
        }
        
    }
    else {
        return s;
    }
}
    

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
