#include <bits/stdc++.h>   // header file

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'towerBreakers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int towerBreakers(int n, int m) {       //tower breaker fucntion to decide winner

    //win variable to check to be assigned value of winner as 1 or 2 which is player number
    int win;
    
    //starting conditional statements for checking and also both play optimally
    
    //if number of towers is one, then player 1 will get the win by reducing tower to 1 or if both towers and blocks on each are odd and m equal not to one, then 1 wins 
    //or if number of towers odd but blocks even, then 1 wins as obvious
    if((n==1 && m!=1) || (n%2!=0 && m%2!=0 && m !=1) || (n%2!=0 && m%2==0))
        win= 1;
    //if tower height is one ,then  2 will win seeing 1 cannot removing anything  or if towers are even, then  2 wins  
    else if(m==1 || n%2==0)
        win =2;
  
    //returning winner as integer    
    return win;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int n = stoi(first_multiple_input[0]);

        int m = stoi(first_multiple_input[1]);

        int result = towerBreakers(n, m);

        fout << result << "\n";
    }

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
