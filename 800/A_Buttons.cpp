#include <bits/stdc++.h>
using namespace std;

void shivam(int a, int b, int c){
    int annaExtra = ceil(c/2.0);
    if(a+annaExtra > b+(c-annaExtra)) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a>>b>>c;
        shivam(a, b, c);
    }
    return 0;
}
