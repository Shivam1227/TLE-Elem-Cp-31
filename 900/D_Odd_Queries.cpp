#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(){
    int n, q;
    cin >>n>>q;
    vector<int> vec(n);
    vector<ll> ps(n);    //ps ->prefixsum array
    for(int i = 0; i<n; i++){
        cin>>vec[i];
        if(i==0){
            ps[i] = vec[i];
        }
        else{
            ps[i] = ps[i-1]+vec[i];
        }
    }
    for(int i = 0; i<q; i++){
        int l, r, k;
        cin>>l>>r>>k;
        if(l >= 2){
            if((1LL * (r-l+1)*k + (ps[n-1]-(ps[r-1]-ps[l-2]))) % 2 == 1){     
                printYes;
            }
            else printNo;
        }
        else{
            if((1LL * (r-l+1)*k + (ps[n-1]-ps[r-1])) % 2 == 1){     
                printYes;
            }   
            else printNo;      
        }
    }

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
