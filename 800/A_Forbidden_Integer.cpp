#include <bits/stdc++.h>
using namespace std;

void shivam(int n, int k, int x){
    if(x!= 1){
        cout<<"YES"<<endl;
        vector<int> ans(n, 1);
        cout<<n<<endl;
        for(int i : ans) cout<<i<<" ";
        cout<<endl;
    }
    else if(k == 2 && x!=2){
        if(n%2 == 0){
            cout<<"YES"<<endl;
            vector<int> ans(n/2, 2);
            cout<<n/2<<endl;
            for(int i : ans) cout<<i<<" ";
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if(k>2 && x!=2){
        if(n%2 == 0){
            cout<<"YES"<<endl;
            vector<int> ans(n/2, 2);
            cout<<n/2<<endl;
            for(int i : ans) cout<<i<<" ";
            cout<<endl;
        }
        else{
            cout<<"YES"<<endl;
            vector<int> ans;
            ans.push_back(3);
            cout<<((n-3)/2) + 1<<endl;
            for(int i = 0; i<(n-3)/2; i++) ans.push_back(2);
            for(int i : ans) cout<<i<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >>n>>k>>x;
        shivam(n, k, x);
    }
    return 0;
}
