#include<bits\stdc++.h>
using namespace std;

int main(){
    string s="aabaa";
    string temp=s;

    reverse(temp.begin(),temp.end());
    if(s==temp) cout <<"Pelindrome" <<endl;
    else cout <<"Not Pelindrome";


}