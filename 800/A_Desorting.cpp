#include <bits/stdc++.h>
using namespace std;

void shivam(vector<int> &vec, int n){
    int mini = INT_MAX;
    int minA, minB;
    int j = 1;
    for(int i = 0; i<n-1; i++){
        if(vec[i] > vec[j]){
            cout<<0<<endl;
            return;
        }
        else if((vec[j] - vec[i]) < mini){
            minA = vec[i];
            minB = vec[j];
            mini = vec[j] - vec[i];
        }
        j++;
    }
    cout<<(minB - minA)/2 + 1<<endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> vec(n);
        for(int &i : vec) cin>>i;
        shivam(vec, n);
    }
    return 0;
}
