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
    long long x, n;
    cin>>x>>n;

    long long finalPos;
    if(n % 4 == 0){
        finalPos = 0;
    }
    else if(n % 4 == 1){
        finalPos = -n;
    }
    else if(n % 4 == 2){
        finalPos = 1;
    }
    else{
        finalPos = n+1;
    }

    if(x%2 == 0){
        finalPos = x+finalPos;
    }
    else{
        finalPos = x-finalPos;
    }

    cout<<finalPos<<endl;
    
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
