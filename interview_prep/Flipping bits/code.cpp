#include <bits/stdc++.h>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'flippingBits' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */

long flippingBits( long n) {
    return (unsigned)~n;
    
    // return (UINT_MAX-n);
//     vector<long> j;
    
//     int x;
//     while (n > 0) {
//     x = n % 2;
//     j.push_back(x);
//       n = n / 2;
      
//    }
//     unsigned count = 0;
//    reverse(j.begin(), j.end());
//    for (int i = 0; i<j.size(); i++) {
//        if (j[i]==1) {
//            j[i]=0;
//        }
//        else {
//            j[i]=1;
//        }
//    }
   
// // // //    for (auto &element:j) {
// // // //        cout<<element;
// // // //    }
//    for (int w = 0; w<j.size(); w++) {
//        if (j[w]==1) {
//            count = count + 2^(j.size()-w-1);
//        }
//    }
// //    return (uint)~n;
   
   
// // //     unsigned int count = 0;
// // //    for (int j = 0; j < sizeof(arr) ; j++) {
// // //        if (arr[j] == 1) {
// // //            count = count + pow(2,j);
// // //        }
// // //    }
//     return  count;
//     return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    long  int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string n_temp;
        getline(cin, n_temp);

        long  n = stol(ltrim(rtrim(n_temp)));

        long  result = flippingBits(n);

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