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
    int n;
    cin >>n;
    vector<int> vec(n);
    for(int i = 0; i<n; i++) cin>>vec[i];
    int i, j, k;
    i = -1;
    j = -1;
    k = -1;
    for(int l = 2; l<n; l++){
        if(vec[l-2] < vec[l-1] && vec[l] < vec[l-1]){
            i = l-1;
            j = l;
            k = l+1;
        }
    }

    if(i != -1){
        cout<<"Yes"<<endl;
        cout<<i<<" "<<j<<" "<<k<<endl;
    }
    else{
        cout<<"No"<<endl;
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
