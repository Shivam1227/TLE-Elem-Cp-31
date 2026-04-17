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
    cin>>n;

    vector<int> vec(n);
    vector<int> vec2(n);
    for(int i = 0; i<n; i++) cin>>vec[i];
    for(int i = 0; i<n; i++) cin>>vec2[i];

    vector<int> maxFreq(2*n+1, 0);
    vector<int> maxFreq2(2*n+1, 0);

    int cnt = 1;
    maxFreq[vec[0]] = 1;
    for(int i = 1; i<n; i++){
        if(vec[i] == vec[i-1]){
            cnt++;
        }
        else{
            maxFreq[vec[i-1]] = max(maxFreq[vec[i-1]], cnt);
            cnt = 1;
        }
    }
    maxFreq[vec[n-1]] = max(maxFreq[vec[n-1]], cnt);
    cnt = 1;

    maxFreq2[vec2[0]] = 1;
    for(int i = 1; i<n; i++){
        if(vec2[i] == vec2[i-1]){
            cnt++;
        }
        else{
            maxFreq2[vec2[i-1]] = max(maxFreq2[vec2[i-1]], cnt);
            cnt = 1;
        }
    }
    maxFreq2[vec2[n-1]] = max(maxFreq2[vec2[n-1]], cnt);

    int ans = INT_MIN;
    for(int i = 0; i<=2*n; i++){
        ans = max(ans, maxFreq[i] + maxFreq2[i]);
    }


    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
