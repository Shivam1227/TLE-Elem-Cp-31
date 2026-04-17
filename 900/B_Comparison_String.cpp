#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(int n, string s) {
    int cnt = 1;
    int maxcnt = 0;
    char curr = s[0];
    for(int i = 1;i <n; i++){
        if(s[i] == curr){
            cnt++;
        }
        else{
            curr = s[i];
            maxcnt = max(maxcnt, cnt);
            cnt = 1;
        }
    }
    maxcnt = max(maxcnt, cnt);
    cout<<maxcnt+1<<endl;
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        shivam(n, s);
    }
    return 0;
}
