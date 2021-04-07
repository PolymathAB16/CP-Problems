#include<bits/stdc++.h>
using namespace std;

#define f first;
#define s second;
#define pb push_back;
#define mp make_pair;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f;
const int maxn = 10000;

int minIndex(vector<int> &x,int start,int end ){
    int ans=x[0];
    for(int i=1;i<x.size();i++){
        if(x[i]<ans) ans= x[i];
    }
    return ans;
}

void solve(int test){
    cout << "Case #" << test << ": ";
    int n; vi a(n); 
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    int cost=0;
    for(int i=0;i<n-1;i++){

        reverse(a.begin()+i, a.begin()+minIndex(a,i,n)+1);
        cost+=minIndex(a,i,n)-i+1;
        
    }
    cout<<cost<<"\n";
}


int main(){
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++){
		solve(t);
	}
}