#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

void shivam(int x1, int y1, int x2, int y2){
    if(y2<y1){
        cout<<-1<<endl;
        return;
    }
    // else if(x2 == x1){
    //     cout<<(y2-y1) * 2<<endl;
    // }
    // else if(y2 == y1){
    //     cout<<x1-x2<<endl;
    // }
    // else{

    //     cout<<((x1-x2) + (y2-y1)*2)<<endl;
    // }
    int m = y2-y1;        // here we reached the destination point in y axis by taking m moves
    int x = x1+m;         //current position of x after using move(x+1, y+1)
    if(x2 > x) cout<<-1<<endl;
    else{
        cout<<m+(x-x2)<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2;
        cin >>x1>>y1>>x2>>y2;
        shivam(x1, y1, x2, y2);
    }
    return 0;
}
