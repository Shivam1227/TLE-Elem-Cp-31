#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(int n, vector<int> &vec) {
    if(vec.size()%2 == 0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i = 0; i<n; i++){
            cin>>vec[i];
        }
        shivam(n, vec);
    }
    return 0;
}
