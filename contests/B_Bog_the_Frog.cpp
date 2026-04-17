#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define print(s) cout << (s) << endl
#define printYes cout<<"YES"<<endl;
#define printNo cout<<"NO"<<endl;

bool isPrime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    for(int i = 3; i*i <= n; i+=2 ){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

void shivam(){
    
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n<=3){
        cout<<-1<<endl;
        return;
    }

        if(isPrime(n-3)){
            for(int i = 1; i<=n; i+=2){
                cout<<i<<" ";
            }
            for(int i = 2; i<=n; i+=2){
                cout<<i<<" ";
            }
        }
        else if(isPrime(n-1)){
            for(int i = 2; i<=n; i+=2){
                cout<<i<<" ";
            }
            for(int i = 1; i<=n; i+=2){
                cout<<i<<" ";
            }
        }
        else{
            cout<<-1;
        }

    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
