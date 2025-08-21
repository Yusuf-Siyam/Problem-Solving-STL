// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(7);
    
//     for(int i=0; i<v.size() ; i++)
//     {
//         cout << v[i] <<" ";
//     }
// } ---------------------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n ;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
   
    cout << v.size()<< endl ;
    
    for(int i=0; i<v.size() ; i++)
    {
        cout << v[i] <<" ";
    }
} 
