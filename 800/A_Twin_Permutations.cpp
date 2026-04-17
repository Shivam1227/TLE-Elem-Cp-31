#include <bits/stdc++.h>
using namespace std;

void shivam(int &n, vector<int> &vec){    
    int target = n+1;


    for(int i=0; i<n; i++){
        cout<<target-vec[i]<<" ";
    }

    cout<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> vec(n);
        for(int i = 0; i<n; i++) cin>>vec[i];
        shivam(n, vec);
    }
    return 0;
}
