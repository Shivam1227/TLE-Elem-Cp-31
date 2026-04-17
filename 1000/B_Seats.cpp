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

    string s;
    cin>>s;

    if(n == 1){
        cout<<1<<endl;
        return;
    }
    int one = 0;
    int zero = 0;
    int cnt = 0;
    int MaxOne = 0;
    bool first = true;
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            one++;
        }
        else{
            zero++;
        }
        if(one == 1 && first){
            int temp = (zero/3)+1;
            cnt += ((zero%3 == 2)? temp+1: temp);
            MaxOne = max(one, MaxOne);
            one = 0;
            zero = 0;
            first = false;
        }
        else if(one == 1){
            cnt += ((zero)/3)+1;
            MaxOne = max(one, MaxOne);
            one = 0;
            zero = 0;
        }
    }
    if(MaxOne == 0){
        int temp = zero/3;
        cout<<((zero%3 > 0)? temp+1: temp)<<endl;
        return;
    }
    if(zero > 0){
        int temp = zero/3;
        cnt += ((zero%3 == 2)? temp+1: temp);
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
