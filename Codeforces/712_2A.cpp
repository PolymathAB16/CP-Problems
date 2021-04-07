/*
Codeforces #712 Div. 2
A. Deja Vu
Author: PolymathAB
Date: 04/04/2021
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

bool palindrome(const string &s) {
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n - i - 1]) return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while(te--) {
        string s;
        cin >> s;
        if(!palindrome(s + 'a')) {
            cout << "YES\n" << s << 'a' << "\n";
        }else if(!palindrome('a' + s)) {
            cout << "YES\n" << 'a' << s << '\n';
        }else {
            cout << "NO\n";
        }
    }
}
