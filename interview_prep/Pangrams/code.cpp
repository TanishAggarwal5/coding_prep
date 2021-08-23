#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
  int z[26] = {0};
  for (int i = 0; i<s.length(); i++) {
      if (s[i]!=' ') {
          char t = tolower(s[i]);
          int q = t - 'a';
          z[q]++;
      }
  }
  int y = true;
  for (int i =0; i<26; i++) {
      if (z[i]==0) {
          y =false;
      }
  }
  if (y==true) {
      return "pangram";
  }
  else {
      return "not pangram";
  }
  
    
    // return "pangram";
        
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
