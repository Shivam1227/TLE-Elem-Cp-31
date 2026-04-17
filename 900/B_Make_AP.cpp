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
    int a, b, c;
    cin>>a>>b>>c;
    
    if((2*b - c)/a > 0 && (2*b - c)%a == 0){        // m multiplied with a
        printYes;
    }
    else if((a+c)/b > 0 && ((a+c)/2) % b == 0 && (c-a)%2 == 0){
        printYes;
    }
    else if((2*b - a)/c > 0 && (2*b - a) % c == 0){
        printYes;
    }
    else{
        printNo;
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
