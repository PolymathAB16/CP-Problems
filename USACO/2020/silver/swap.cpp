#include<bits/stdc++.h>
using namespace std;

#define MAXN 10000
#define MAXK 10
#define INF 0x3FFFFFFFFFFFFFFFLL
#define sz(x) (int)(x).size()


int N, K;
long long A[MAXN];
long long DP[MAXK][MAXN];

void setIO(string name = "") {
	cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
	if (sz(name)) {
		freopen((name+".in").c_str(), "r", stdin); // see /general/io
		freopen((name+".out").c_str(), "w", stdout);
	}
}

int l[100],r[100],p[MAXN];

int main() {
    setIO("swap");
    int n,k,m;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        cin>>l[i]>>r[i];
        l[i]--; r[i]--;
    }
    for(int i=0;i<n;i++){
        p[i]=i;
        
    }


 
}