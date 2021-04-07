/*
Code Jam 
P
Author: PolymathAB
Date: /2021
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;

#define FASTIO {cout.tie(NULL); cin.tie(NULL); ios_base::sync_with_stdio(false);}
#define S second
#define F first
#define FOR(i,n) for(int i=0;i<(n);i++)
#define FORX(i,x,n) for(int i=(x);i<(n);i++)
#define FORd(i,n) for(int i=(n)-1;i>=0;--i)
#define FORdX(i,n,x) for(int i=(n)-1;i>=(x);--i)
#define pb push_back
#define mp make_pair

void solve(int test){
    int ans;
    int n,m; cin>>n>>m;
    
    cout << "Case #" << test << ": " << ans << '\n';
}

int main(){
    FASTIO;
    int t; cin>>t;
    for(int i=0;i<t;i++){
        solve(i+1);
    }
}