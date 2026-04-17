#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(int &n, vector<int> &vec){
    int XorAcc = 0;
    for(int i : vec){
        XorAcc ^= i;
    }
    if(n%2==0){
        if(XorAcc == 0){
            cout<<1<<endl;        //print any number for x
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<XorAcc<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
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
