#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int DotCnt = 0;
        int TempCnt = 0;
        int MaxTempCnt = 0;
        for(int i = 0; i<n; i++){
            char c;
            cin>>c;
            if(c == '.'){
                DotCnt++;
                TempCnt++;
                MaxTempCnt = max(MaxTempCnt, TempCnt);
            }
            else{
                MaxTempCnt = max(MaxTempCnt, TempCnt);
                TempCnt = 0;
            }
        }
        if(MaxTempCnt >= 3)cout<<2<<endl;
        else cout<<DotCnt<<endl;
    }
}