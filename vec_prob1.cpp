#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout <<"Enter the total:";
cin >>n ;

vector<int> v(n);
for(int i=0;i<n;i++){
    cin >> v[i];
}

    int seja=0,dina=0, f1=1; 
    while(!v.empty()){
        if(f1==1){ //seja turn
            if(v[0]>v.back()){ //shuru element jodu sesh theke boro hoy
              seja+=v[0]; //tahole seja shurur ta nibe
              v.erase(v.begin()); //then shurur ta delete kore dibo
            } 
            else{
                seja+=v.back(); 
                v.pop_back();

            }
            f1=2; //Dinar tern 
        }
        else{
            if(v[0]>v.back()){
                dina+=v[0];
                v.erase(v.begin());
            }
            else{
                dina+=v.back();
                v.pop_back();
            }
            f1=1;

        }
    }
cout <<" seja score:"<<seja <<endl;
cout << "Dina score:"<< dina;


return 0;
}

// pechon theke delete[pop_back()] korar complexity:O(1)
//samne theke delete[v.erase(v.begin())] comp:O(n)
//worst case copmp:5,4,3,2,1 : O(n squre)
//given n=100 ,O(100^2)=(10^6)=accepted

/*

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = n - 1;
    int seja = 0, dina = 0;
    bool seja_turn = true;

    while(l <= r){
        int chosen;
        if(v[l] > v[r]){
            chosen = v[l];
            l++;
        } else {
            chosen = v[r];
            r--;
        }

        if(seja_turn){
            seja += chosen;
        } else {
            dina += chosen;
        }

        seja_turn = !seja_turn;  // turn swap
    }

    cout << seja << " " << dina << endl;

    return 0;
}

*/