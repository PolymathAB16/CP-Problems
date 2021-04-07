#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int tt; cin>>tt;
	while(tt--){
		int n; cin>>n;
		vector <int> a;
		for(int i=1;i<=n;++i){int x; cin>>x; a.emplace_back(x);}
		sort(a.begin(),a.end());
		int ans=n;
		for(int i=1;i<=n/2;++i){
			if(a[i-1]!=a[i+(n+1)/2-1]) ans-=2;
		}
		cout<<ans<<'\n';
	}
    return 0;
}
 