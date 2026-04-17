#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n, k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i = 0; i<n; i++){

            cin>>vec[i];

        }

        vector<int> temp = vec;
        sort(temp.begin(), temp.end());

        if(vec == temp || k>1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

}
