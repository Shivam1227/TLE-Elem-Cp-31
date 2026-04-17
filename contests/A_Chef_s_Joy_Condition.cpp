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
    int n;
    cin >>n;
    string s;
    cin>>s;

    for(char &c : s){
        c = tolower(c);
    }

    if(s.find("wce") != std::string::npos && s.find("codechef") != std::string::npos){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
