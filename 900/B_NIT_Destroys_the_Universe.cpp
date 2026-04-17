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
    bool newGrp = false;
    for(int i = 0; i<n; i++){
        if(vec[i] == 0){
            newGrp = false;
        }
        else if(!newGrp){
            newGrp = true;
            cnt++;
        }
    }
    cout<<min(2,cnt)<<endl;           // 2 because if no of groups are more than 2 then also we can select whole array and convert it into some mex 'w' and then again in 2nd operation we can select that whole range and now the mex turns out to be 0
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
