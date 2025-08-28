#include<bits\stdc++.h>
using namespace std;
int main()
{
 
   // vector<string> v;
   // v.push_back("Siyam");
   // v.push_back("yusuf");
   // v.push_back("Rakib");
   // v.push_back("siyam");


//unique string ki ki 
// sort(v.begin(),v.end());
// int sz=unique(v.begin(),v.end())-v.begin();

// cout<< sz << endl;

// for(int i=0;i<sz;i++) cout<< v[i] << endl;

//-------------------------------------
//   sort (v.begin(),v.end()); // lower case to upper case sort 
//   sort (v.rbegin(),v.rend()); // upper case to lower case sort 
//    for ( auto u : v)
//    cout << u <<endl;

//-----remove spacific cheracter----
string s="siyaaaaam";
s.erase(remove(s.begin(),s.end(),'a'),s.end());
cout << s<< endl;


}



