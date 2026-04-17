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
    for(int i = 0; i<n; i++) cin>>vec[i];

    int ans = vec[0];
    int currSum = vec[0];
    
    for(int i = 1; i<n; i++){
        if((abs(vec[i]%2)) != (abs(vec[i-1]%2))){
            currSum = max(vec[i] , vec[i]+currSum);
        }
        else{
            currSum = vec[i];
        }
        ans = max(ans, currSum);
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
