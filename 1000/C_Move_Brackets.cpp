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
    cin>>n;

    string s;
    cin>>s;
    stack<char> st;
    int i = 1;
    st.push(s[0]);
    int validPairs = 0;
    while(i<n){
        if(!st.empty() && st.top() == '(' && s[i] == ')'){
            st.pop();
            validPairs++;
        }
        else{
            st.push(s[i]);
        }
        i++;
    }

    cout<<(n/2)-validPairs<<endl;

}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) shivam();
    return 0;
}
