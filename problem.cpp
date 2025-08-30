#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string temp = s;
        reverse(temp.begin(), temp.end()); // reverse the string

        if (s == temp) {
            cout << "yes\n"; // string is a palindrome
        } else {
            cout << "no\n"; // string is not a palindrome
        }
    }
}


//-------------------------------------------

#include <bits/stdc++.h>
using namespace std;

bool idVewal (char c){
    return (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u');

}

int main( ){
    string s, ans;
    cin >> s ;
    for( auto u : s){
        char c= tolower(u);
        if (idVewal(c)==0){
            ans+='.';
            ans+=c;
        }
    }
    cout << ans << endl;
     
}
