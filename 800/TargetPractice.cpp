#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int grid[10][10];
        int points = 0;
        for(int i = 1; i<=10; i++){
            for(int j = 1; j<=10; j++){
                char c;
                cin>>c;
                if(c == 'X'){
                    if(i == 1 || i == 10 || i >= 2 && i <= 9 && j == 1 || j == 10){
                         points +=1;
                    }
                    else if(i == 2 || i == 9 || i >= 3 && i <= 8 && j == 2 || j == 9){
                        points += 2;
                    }
                    else if(i == 3 || i == 8 || i >= 4 && i <= 7 && j == 3 || j == 8){
                        points += 3;
                    }
                    else if(i == 4 || i == 7 || i >= 5 && i <= 8 && j == 4 || j == 7){
                        points += 4;
                    }
                    else{
                        points += 5;
                    }
                }
            }
        }
        cout<<points<<endl;
    }
}