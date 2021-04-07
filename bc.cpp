/*
Code Jam R1B 2020
P3 Join The Ranks
Author: PolymathAB
Date: 06/04/2021


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
    int r,s; cin>>r>>s;
    int grid[r][s];
    for(int i=0;i<r;i++){
        for(int j=0;j<s;j++){
            
        }
    }
    cout << "Case #" << test << ": " << ans << '\n';
}

int main(){
    FASTIO;
    int t; cin>>t;
    for(int i=0;i<t;i++){
        solve(i+1);
    }
}
*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#pragma GCC optimize("unroll-loops")    
#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <stack>
#include <deque>
#include <random>
#define pb push_back
#define x first
#define y second
#define mp make_pair
#define len(a) int(a.size())
#define files(FILENAME) read(FILENAME); write(FILENAME)
#define read(FILENAME) freopen((string(FILENAME) + ".in").c_str(), "r", stdin)
#define write(FILENAME) freopen((string(FILENAME) + ".out").c_str(), "w", stdout)
using namespace std;
        
template<typename T1, typename T2>inline void chkmin(T1 &x, T2 y) { if (x > y) x = y; }
template<typename T1, typename T2>inline void chkmax(T1 &x, T2 y) { if (x < y) x = y; } 
template<typename T, typename U> inline ostream &operator<< (ostream &_out, const pair<T, U> &_p) { _out << _p.first << ' ' << _p.second; return _out; }
template<typename T, typename U> inline istream &operator>> (istream &_in, pair<T, U> &_p) { _in >> _p.first >> _p.second; return _in; }
template<typename T> inline ostream &operator<< (ostream &_out, const vector<T> &_v) { if (_v.empty()) { return _out; } _out << _v.front(); for (auto _it = ++_v.begin(); _it != _v.end(); ++_it) { _out << ' ' << *_it; } return _out; }
template<typename T> inline istream &operator>> (istream &_in, vector<T> &_v) { for (auto &_i : _v) { _in >> _i; } return _in; }
template<typename T> inline ostream &operator<< (ostream &_out, const set<T> &_s) { if (_s.empty()) { return _out; } _out << *_s.begin(); for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; } return _out; }
template<typename T> inline ostream &operator<< (ostream &_out, const multiset<T> &_s) { if (_s.empty()) { return _out; } _out << *_s.begin(); for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; } return _out; }
template<typename T> inline ostream &operator<< (ostream &_out, const unordered_set<T> &_s) { if (_s.empty()) { return _out; } _out << *_s.begin(); for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; } return _out; }
template<typename T> inline ostream &operator<< (ostream &_out, const unordered_multiset<T> &_s) { if (_s.empty()) { return _out; } _out << *_s.begin(); for (auto _it = ++_s.begin(); _it != _s.end(); ++_it) { _out << ' ' << *_it; } return _out; }
template<typename T, typename U> inline ostream &operator<< (ostream &_out, const map<T, U> &_m) { if (_m.empty()) { return _out; } _out << '(' << _m.begin()->first << ": " << _m.begin()->second << ')'; for (auto _it = ++_m.begin(); _it != _m.end(); ++_it) { _out << ", (" << _it->first << ": " << _it->second << ')'; } return _out; }
template<typename T, typename U> inline ostream &operator<< (ostream &_out, const unordered_map<T, U> &_m) { if (_m.empty()) { return _out; } _out << '(' << _m.begin()->first << ": " << _m.begin()->second << ')'; for (auto _it = ++_m.begin(); _it != _m.end(); ++_it) { _out << ", (" << _it->first << ": " << _it->second << ')'; } return _out; }
        
typedef long long base; 
typedef pair<int, int> point;      
typedef complex<double> comp;

const int N = 1e6 + 5;

int t, r, s;

// void cond(vector<pair<int, int>>& cur) {
//     vector<pair<int, int>> ans;
//     int L = cur.size();
//     while (L < cur.size()) {
//         int R = L;
//         int sum = 0;
//         while (R < cur.size() && cur[L].first == cur[R].first) {
//             sum += cur[L].second;
//         }
//         ans.push_back({cur[L].first, sum});
//         L = R;
//     }
//     swap(ans, cur);
// }

int main() {
    ios::sync_with_stdio(0);
    srand(time(0));
    cin >> t;
    int cs = 0;
    while (t--) {
        ++cs;
        cout << "Case #" << cs << ": ";
        vector<pair<int, int>> cur;
        cin >> r >> s;
        for (int i = 0; i < s; ++i) {
            for (int j = 0; j < r; ++j) {
                cur.push_back({j, 1});
                cout<<cur[j].first<<cur[i].second<<"\n";
            }
        }
        vector<pair<int, int>> ans;
        while (cur.size() != r) {
            if (cur.size() == r + 1) {
                int a = cur[0].second;
                int b = 0;
                for (int i = 1;; ++i) {
                    b += cur[i].second;
                    if (cur[i].first == cur[0].first) {
                        cur[i].second += cur[0].second;
                        cur.erase(cur.begin());
                        break;
                    }
                }
                ans.push_back(make_pair(a, b));
            } else {
                int a = cur[0].second + cur[1].second;
                int b = 0;
                for (int i = 2;; ++i) {
                    b += cur[i].second;
                    if (cur[i].first == cur[0].first) {
                        cur[i].second += cur[0].second;
                        cur[i + 1].second += cur[1].second;
                        cur.erase(cur.begin());
                        cur.erase(cur.begin());
                        break;
                    }
                }
                ans.push_back(make_pair(a, b));
            }
        }
        cout << ans.size() << '\n';
        for (auto i : ans) {
            cout << i.first << ' ' << i.second << '\n';
        }
    }
}  
