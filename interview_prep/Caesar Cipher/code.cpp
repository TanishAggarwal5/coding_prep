#include <bits/stdc++.h>
#include <string>
#include <ctype.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */

string caesarCipher(string s, int k)    //function for the cipher
{
    
    //for loop to iterate through the string and shift letters by k
    for (int i = 0; i < s.size(); ++i)
    {
        
        //ascii of a = 97 and ascii of A = 65
        
        //z will give use the number of letter from  from 0-25 if letter is upercase
        int z = s[i] + k - 65;
        //w will give use the number of letter from  from 0-25 if letter is lowercase
        int w = s[i] + k - 97;
        
        //using if statments to change letters depending on if letter is uppercase or lowercase
        if (65 <= s[i] && s[i] <= 90)
        //if upper case , then the remainder with 26 will help in rotation if we reach ascii 90 to go back to 65 for remaining skips
            s[i] = char(((z) % 26) + 65);

        //if lower case , then the remainder with 26 will help in rotation if we reach ascii 122 to go back to 65 for remaining skips
        else if (97 <= s[i] && s[i] <= 122)
            s[i] = char(((w) % 26) +97);
        
    }
   
    //returning updated string
    return s;
    
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
