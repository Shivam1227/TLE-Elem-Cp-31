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
    int n, w;
    cin>>n>>w;
    vector<long long> vec(n);

    for(int i = 0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());

    ll h = vec[0];
    ll i = 1;
    for(i = 1; i<n && w > 0; i++){
        if(vec[i] == h) continue;
        
        ll required_water = (i*(vec[i]-h));
        if(w >= required_water){
            h = vec[i];
            w -= required_water;
        }
        else{
            h += (w/i);
            w = 0;
        }

    }

    if(w > 0){              // still any coloumn is left
        h += (w/n);
    }
    cout<<h<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
