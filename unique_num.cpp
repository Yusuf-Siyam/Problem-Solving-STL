#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> v={2,4,5,3,6,7,3,7,8};
 sort(v.begin(),v.end()); //O(nlog2^n)
 int size= unique(v.begin(),v.end())-v.begin(); //last index er ag porjonto return kore (O(n))

 cout << "Total unique val:" << size << endl ; // unique value koyta paisi

 for(int i=0;i< size ;i++){
    cout << v[i] <<" ";
 }
}

//unique er cpp.....
// int write = 1;
// for (int read = 1; read < v.size(); read++) {
//     if (v[read] != v[read - 1]) {
//         v[write] = v[read];
//         write++;
//     }
// }
/*Step
 red| wrt|v[read]|v[read] != v[read-1]	

	1	1	3	✅ 3 ≠ 2	v[1] = 3, write++ → 2
	2	2	3	❌ 3 = 3	skip   (duplicate)
	3	2	4	✅ 4 ≠ 3	v[2] = 4, write++ → 3
	4	3	5	✅ 5 ≠ 4	v[3] = 5, write++ → 4
	5	4	5	❌ 5 = 5	skip
	6	4	6	✅ 6 ≠ 5	v[4] = 6, write++ → 5    */
