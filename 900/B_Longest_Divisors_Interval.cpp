#include <bits/stdc++.h>
using namespace std;
#define ll long long

void shivam(ll n) {
    int cnt = 0;
    int i = 1;
    while(n%i == 0){
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
}   

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        shivam(n);
    }
    return 0;
}






// T.C:  ~O(50)   == ~O(log n)  
// the LCM of numbers from 1 to 50 is approximately around 10^18 order, that means that for such high n(10^18), 50 numbers are sufficient for getting the longest divisor interval
