 /*
 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={ 4,3,6,8,1,6,3,5,9};
    
    vector<int>::iterator it = max_element(v.begin(), v.end()); //maximum

    vector<int>::iterator it = max_element(v.begin()+1, v.begin()+4);


    cout << " max num is " << *it <<endl;
}

     //int max=*max_element(v.begin(),v.end());
     //max_element() return kore iterator Points to the max value

 #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={ 4,3,6,8,1,6,3,5,9};
    
    vector<int>::iterator it = min_element(v.begin(), v.end()); //maximum

    //vector<int>::iterator it = min_element(v.begin()+1, v.begin()+4);


    cout << " min num is " << *it <<endl;
}
*/
//complexity O(n)
//--------------2D vector-----------


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <vector<int> > v;
    vector<int> a1= { 3,43,4,3};
    vector<int> a2= { 3,43,4,3};
    v.push_back(a1);
    v.push_back(a2);

    for(auto u:v){
        for (auto g:u){
            cout << g << " ";
            cout<< endl;

        }
    }
    
    

}