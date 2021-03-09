#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vb = vector<bool>;
using pl = pair<ll, ll>;
using vpl = vector<pl>;
using vc = vector<char>;
using vs = vector<string>;
using str = string;

#define FastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define ins insert
#define f first
#define s second
#define sz(x) (ll)(x).size()
#define len(x) (ll)(x).length()
#define FOR(i, a, b) for(ll i=a; i<b; ++i)
#define ROF(i, b, a) for(ll i=(b)-1; i>=a; --i)
#define EACH(a, x) for(auto& a: x)
#define lb(a, x) lower_bound(all(a), x) - begin(a)
#define ub(a, x) upper_bound(all(a), x) - begin(a)

void setIO(string fileName = ""){
	FastIO;
	if(len(fileName)){
		freopen((fileName+".in").c_str(), "r", stdin);
		freopen((fileName+".out").c_str(), "w", stdout);
	}
}

vl adj[3001], order(3001); ll nodes;
vb visited(3001), closed(3001);

// Store the global variables, including the number of nodes visited and the boolean closed array.

void DFS(ll node){
	if(visited[node] || closed[node]) return;
	// Increase the number of nodes if and only if they haven't been closed.
	nodes++;
	visited[node] = true;
	EACH(u, adj[node]){
		if(!visited[u]){
			DFS(u);
		}
	}
}

int main(){
	setIO("closing");
	ll n, m; cin >> n >> m;
	FOR(i, 0, m){
		ll a, b; cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	FOR(i, 0, n){
		cin >> order[i];
	}
	// Check the first line which indicates whether the initial farm is fully connected.
	DFS(1);
	if(nodes == n) cout << "YES" << endl;
	else cout << "NO" << endl;
	FOR(i, 0, n-1){
		fill(all(visited), false);
		nodes = 0;
		closed[order[i]] = true;
		DFS(order[n-1]); // DFS from the barn that will close last
	// Have all the unclosed barns been visited?
		(nodes == n-i-1) ? cout << "YES" << endl: cout << "NO" << endl;
	}
}