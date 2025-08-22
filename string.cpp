#include<bits\stdc++.h>
using namespace std;
int main(){

//    string s;
//    s=s+'a';
//    s=s+'b';
//    cout << s <<endl;

   
    // string s1;
    // s1="Siyam ", 
    // s1+="Mia"; //concate korte hobe...
    // s1.clear();
    //cout << s1 << endl ;


    // string s;
    // s="Md yusuf Siyam";

    // --------iterator----------

    // string::iterator it ;
    // for(it=s.begin(); it!=s.end(); it++){
    //     cout << *it;
    // }

    //------------for each---------
    // for(auto x : s){
    //     cout<< x;
    // }
    
    //---------String Equal kina check----------
    // string s1="siyam",s2="siyam";
    // if(s1==s2) cout <<"Equal";
    // else cout <<"not equal";

    //----string reverse---------

    string s1="siyam",s2="siyam";
    reverse(s1.begin(),s1.end());
    cout << s1 <<endl;
    cout <<s1.length();

    //compare comp:O(n)
    //reverse comp:O(n)


}