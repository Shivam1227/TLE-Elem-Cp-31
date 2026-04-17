#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n-1);
        int efficiency = 0;
        int posEfficiency = 0;
        int negEfficiency = 0;
        for(int i = 0; i<n-1; i++){
            int x;
            cin>>x;
            a[i] = x;
            efficiency += x;

            (x >= 0) ? (posEfficiency += x) : (negEfficiency += x);
        }

        if(posEfficiency >= abs(negEfficiency)){
            int temp;
            (efficiency < 0) ? temp = efficiency : temp = -1*efficiency;
            cout<<temp<<endl;
        }
        else{
            int temp;
            (efficiency > 0) ? temp = efficiency : temp = -1*efficiency;
            cout<<temp<<endl;
        }
    }
    return 0;
}
