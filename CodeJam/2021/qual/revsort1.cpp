#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;


void solve(int test){
    cout << "Case #" << test << ": ";

    int n,c;
    cin>>n>>c;

    vi a(n);
    vi b(n-1); 

    for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    
    if(c>n*(n+1)/2 - 1){
        cout<<"IMPOSSIBLE";
    }
    else if(c<n-1){
        cout<<"IMPOSSIBLE";
    }
    
    else{
        int cost=n*(n+1)/2 -1;
        for(int i=0;i<n-1;i++)b[i]=n-i;
        int i=1;
        while(cost>c){
                b[n-i-1]-=i;
                cost-=i;
                i++;
            }  
        cout<<cost;  
        b[n-i-1]-=cost;
        cost=0;
        }
        
        for(int i=0;i<n-1;i++)cout<<b[i]<<" ";

        for(int i=0;i<n-1;i++) reverse(a.begin()+i,a.begin()+b[i]);

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }   

        cout<<"\n";

}

int main(){
    int t; cin>>t;
    for(int tt=1;tt<=t;tt++){
        solve(tt);
    }
}