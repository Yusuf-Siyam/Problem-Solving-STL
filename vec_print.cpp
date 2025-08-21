#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = { 2, 3, 4, 5, 1};

    cout << *v.begin() << endl; // Prints the first element

    v.erase(v.begin()); // Removes the first element

    cout << v.size() << endl; // Prints the new size of the vector

    for ( auto u : v ) {
        cout << u << " ";
    }
    
    cout << endl;
}
//---------last element print and delete------

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = { 2, 3, 4, 5, 1};

    cout << v.back() << endl; // Prints the last element

    v.pop_back(); // Removes the last element

    cout << v.size() << endl; 

    for ( auto u : v ) {
        cout << u << " ";
    }
    
    cout << endl;
}