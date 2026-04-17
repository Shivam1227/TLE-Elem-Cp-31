#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long dopuble
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

vector<int> RoundInts{1, 2 , 3 ,4, 5, 6, 7, 8 , 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000};
int m = RoundInts.size();
void shivam(int &n){
    for(int i = 0; i<m; i++){
        if(RoundInts[i] > n){
            cout<<i<<endl;
            return;
        }
    }
    cout<<m<<endl;
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        shivam(n);
    }
    return 0;
}
