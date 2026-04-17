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
    int cnt = 0;
    for(int i = n-2; i>=0; i--){
        if(vec[i+1] <= vec[i]){
            while(vec[i+1] <= vec[i] && vec[i] > 0){
                vec[i] /= 2;
                cnt++;
            }
            if(vec[i+1] <= vec[i]){
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<cnt<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
