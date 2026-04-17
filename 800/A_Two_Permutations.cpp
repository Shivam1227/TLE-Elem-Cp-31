#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long dopuble
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"Yes"<<endl;
#define printNo cout<<"No"<<endl;

void shivam(int &n, int a, int b){
    if(n == 1){
        printYes;
        return;
    }
    if((a+b <= n-2) || (a == b && a == n)){
        printYes;
        return;
    }
    printNo;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >>n>>a>>b;
        shivam(n, a, b);
    }
    return 0;
}
