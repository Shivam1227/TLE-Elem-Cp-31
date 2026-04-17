
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
    char c;
    cin>>n>>c;

    string s;
    cin>>s;

    if (c == 'g') {
        cout << 0 << endl;
        return;
    }

    vector<int> gIdx;
    vector<int> cIdx;
    for(int i = 0; i<2*n; i++){
        int m = i%n;
        if(s[m] == 'g'){
            gIdx.push_back(i);
        }
    }

    for(int i = 0; i<n; i++){
        if(s[i] == c){
            cIdx.push_back(i);
        }
    }

    int ans = -1;
    for(int i = 0; i<cIdx.size(); i++){
        int s = 0;
        int e = gIdx.size()-1;
        int mid;
        int res = -1;
        while(s<=e){
            mid = s+(e-s)/2;
            if(gIdx[mid] > cIdx[i]){
                res = gIdx[mid];
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }

        ans = max(ans, res-cIdx[i]);
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
