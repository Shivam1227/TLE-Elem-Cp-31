#include <bits/stdc++.h>
using namespace std;

void shivam() {
    string s;
    cin >> s;
    int ab = 0, ba = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] == 'a' && s[i] == 'b') ab++;
        else if (s[i-1] == 'b' && s[i] == 'a') ba++;
    }

    if (ab == ba) {
        cout << s << endl;
    } else {
        if (ab > ba) s[0] = 'b';
        else s[0] = 'a';
        cout << s << endl;
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
