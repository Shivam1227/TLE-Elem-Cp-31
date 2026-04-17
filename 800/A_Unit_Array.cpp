#include <bits/stdc++.h>
using namespace std;

void shivam(int &n, vector<int> &vec){
    int cntplus = 0;
    int cntminus= 0;
    for(int i : vec){
        if(i == 1){
            cntplus++;
        }
        else cntminus++;
    }
    int cnt = 0;
    while(cntminus > cntplus || cntminus %2 == 1){
        cntminus--;
        cntplus++;
        cnt++;
    }

    cout<<cnt<<endl;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> vec(n);
        for(int i = 0; i<n; i++) cin>>vec[i];
        shivam(n, vec);
    }
    return 0;
}
