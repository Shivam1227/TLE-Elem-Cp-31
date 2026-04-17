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
    string s;
    cin>>s;
    int n = s.length();
    int cnt0 = 0;
    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == '0') cnt0++;
        else cnt1++;
    }

    int i = 0;
    if(cnt0 < cnt1){
        int temp = 0;
        while(i<n){
            if(s[i] == '1') temp++;
            if(temp > cnt0){
                break;
            }
            i++;
        }

        cout<<n-i<<endl;
    }
    else if(cnt0 > cnt1){
        int temp = 0;
        while(i<n){
            if(s[i] == '0') temp++;
            if(temp > cnt1){
                break;
            }
            i++;
        }

        cout<<n-i<<endl;
    }
    else{
        cout<<0<<endl;
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
