#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> dist(n+2);
        dist[0] = 0;
        dist[n+1] = x;
        for(int i = 1; i<=n; i++){
            cin>>dist[i];
        }
        int MaxDist = 0;
        for(int i = 0; i<=dist.size()-3; i++){
            MaxDist = max(MaxDist, abs(dist[i] - dist[i+1]));
        }
        MaxDist = max(MaxDist, 2*abs(dist[n] - dist[n+1]));
        cout<<MaxDist<<endl;
    }
}