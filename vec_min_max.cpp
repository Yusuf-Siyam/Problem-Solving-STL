// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v={ 4,3,6,8,1,6,3,5,9};
    
    // vector<int>::iterator it = max_element(v.begin(), v.end()); //maximum

//     vector<int>::iterator it = max_element(v.begin()+1, v.begin()+4);


//     cout << " max num is " << *it <<endl;
// }

     //int max=*max_element(v.begin(),v.end());
     //max_element() return kore iterator Points to the max value

 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={ 4,3,6,8,1,6,3,5,9};
    
    vector<int>::iterator it = min_element(v.begin(), v.end()); //maximum

    //vector<int>::iterator it = min_element(v.begin()+1, v.begin()+4);


    cout << " max num is " << *it <<endl;
}
//complexity O(n)