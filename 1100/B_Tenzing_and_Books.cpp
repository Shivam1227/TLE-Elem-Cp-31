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
    int n, x;
    cin >>n>>x;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    for(int i = 0; i<n; i++){
        cin>>b[i];
    }
    for(int i = 0; i<n; i++){
        cin>>c[i];
    }

    int i = 0, j = 0, k = 0;
    int num = 0;

    if(x == 0){
        cout<<"Yes"<<endl;
        return;
    }
       

    while(i<n || j<n || k<n){
        bool changed = false;
        if(i<n){
            if(((num | a[i]) | x) == x){
                num |= a[i];
                i++;
                changed = true;
            } }
        if(j<n){
            if(((num | b[j]) | x) == x){
                num |= b[j];
                j++;
                changed = true;
            }
        }
        if(k<n){
            if(((num | c[k]) | x) == x){
                num |= c[k];
                k++;
                changed = true;
            }
        }
        if(num == x){
            cout<<"Yes"<<endl;
            return;
        }
        if(!changed){
            break;
        }
    }

    cout<<"No"<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
