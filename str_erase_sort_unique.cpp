#include<bits\stdc++.h>
using namespace std;
int main()
{
//     string s="SIYAM";
//     s.erase(s.begin()+1); remove I
//     s.erase(s.end()-1); remove A
//     cout << s <<endl;
// 
   vector<string> v;
   v.push_back("Siyam");
   v.push_back("yusuf");
   v.push_back("Rakib");
   v.push_back("siyam");

//   sort (v.begin(),v.end()); // lower case to upper case
//   sort (v.rbegin(),v.rend()); // lower case to upper case
//    for ( auto u : v)
//    cout << u <<endl;

//unique string 
sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();

cout<< sz << endl;

for(int i=0;i<sz;i++) cout<< v[i] << endl;


}



