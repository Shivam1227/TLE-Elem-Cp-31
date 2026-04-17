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
    int n, r, b;
    cin>>n>>r>>b;

    string s = "";
    int reds = r/(b+1);
    int extra = r%(b+1);

    int temp = reds;
    bool go = true;
    for(int i = 0;i <n; i++){
        if(temp > 0){
            s += 'R';
            temp--;
        }
        else if(extra > 0 && go){
            s += 'R';
            extra--;
            go = false;
        }
        else{
            s += 'B';
            temp = reds;
            go = true;
        }
    }

    cout<<s<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
