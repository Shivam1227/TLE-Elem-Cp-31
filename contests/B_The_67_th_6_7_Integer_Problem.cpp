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
    int n = 7;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());
    int s= 0;
    for(int i = 0; i<6; i++){
        s += (-1)*vec[i];
    }

    cout<<s+vec[6]<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
