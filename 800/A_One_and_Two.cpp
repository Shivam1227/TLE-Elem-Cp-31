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
    vector<int> preSUm(n);
    int temp = 0;
    for(int i = 0; i<n; i++){
        if(vec[i] != 1){
            preSUm[i] = (temp+vec[i]);
            temp = preSUm[i];
        }
        else{
            preSUm[i] = temp;
        }
    }

    for(int i = 0; i<n; i++){
        if(preSUm[i] == (preSUm[n-1] - preSUm[i])){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
