#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){

    optimize();

    //  string s;
    // getline (cin ,s); //space soho input nibe 
    // cout << s << endl;


    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        string s;
        char c;
        cin >> c;
        getline(cin, s);
        s = c + s;
        cout << "Case " << tc << ": " << s << endl;
    }
    return 0;
}

