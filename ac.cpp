/*
Code Jam R1A 2020
P3. Square Dance
Author: PolymathAB
Date: 31/03/2021
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;

void solve(int test){
    int ans;
    int r,c; cin>>r>>c;
    int grid[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>grid[i][j];
        }
    }
    
    cout << "Case #" << test << ": " << ans << '\n';
}

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t; cin>>t;
    for(int i=0;i<t;i++){
        solve(i+1);
    }
   

}