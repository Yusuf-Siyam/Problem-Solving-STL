//------------sorting Asc--------------

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={2,5,8,4};
//     sort(v.begin(),v.end());

//     for (auto u :v){
//         cout << u <<" " ;

//     }
// }

//------------sorting Desc--------------

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={2,5,8,4};
//     sort(v.begin(),v.end() ,greater<int>() );

//     sort(v.rbegin(),v.rend()); //r means reverse order 

//     for (auto u :v){
//         cout << u <<" " ;

//     }
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,8,5,4,6,3,1};
    sort(v.begin()+1,v.begin()+5); 
//print: 2 4 5 6 8 3 1 (by default Ascending )
//index-1 theke shuru kore 5 er ag porjonto(2 bad 2 er index 0 and 3 bad 3 er index 5)

  for (auto u : v) {
    cout << u << " ";
}
}




//------------// O(N log N) = O(5 log 5)-------------------