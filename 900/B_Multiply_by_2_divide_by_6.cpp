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
    ll n;
    cin>>n;
    int cnt = 0;
    while(n != 1){
        if(n%6 == 0){
            cnt++;
            n /= 6;
        }
        else if(n%3 == 0){
            cnt += 2;
            n /= 3;
        }
        else{
            cout<<-1<<endl;
            return;
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
