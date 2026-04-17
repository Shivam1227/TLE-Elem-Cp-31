#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        
        int cntOperations = 0;
        bool found = false;

        for(int i = 0; i<=5; i++){
            if(x.find(s) != string::npos){
                found = true;
                break;
            }
            else{
                x += x;
                cntOperations++;
            }
        }
        if(found){
            cout<<cntOperations<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
