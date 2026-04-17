#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:

      // Function to check if two strings are rotations of each other or not.
      bool areRotations(string &s1, string &s2) {
          // Your code here
          int n1 = s1.size();
          int n2 = s2.size();
          int cnt = 0;
          if(n1 != n2) return false;
          
          for(int i = 0; i<n1; i++){
              char temp1 = s1[i%n1];
              char temp2 = s1[(i+1)%n1];
              cout<<temp1<<" "<<temp2<<endl;
              for(int j = 0; j<n2; j++){
                  if(j != n2-1 && temp1 == s2[j] && temp2 == s2[j+1]){
                      cnt++;
                      break;
                  } 
                  else if(j == n2-1){
                      if(temp1 == s2[j] && temp2 == s2[0]);
                      break;
                  }
              }
          }
          if(cnt == n1) return true;
          return false;
      }
  };

int main(){

    string a = "abcd", b = "cdab";
    Solution sol;
    int result = sol.areRotations(a, b);
    if(result) cout<<true;
    else cout<<false;
    return 0;

}