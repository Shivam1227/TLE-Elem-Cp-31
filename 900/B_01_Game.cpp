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
    string s;
    cin>>s;
    int n = s.length();
    stack<char> st;

    int cntPair = 0;
    st.push(s[0]);
    for(int i = 1; i<n; i++){
        if(!st.empty() && ((st.top() == '1' && s[i] == '0') || (st.top() == '0' && s[i] == '1'))){
            st.pop();
            cntPair++;
        }
        else{
            st.push(s[i]);
        }
    }
    if(cntPair&1){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
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
