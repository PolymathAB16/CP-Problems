#include<bits/stdc++.h>
using namespace std;

#define pb push_back;
#define mp make_pair;

typedef long long ll; 
typedef pair<int, int> ii; 
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<long,long> vll;

const int INF = 0x3f3f3f3f;
const int maxn = 10000;

void computeLPSArray(string pat, int M,
                                 int lps[])
{

    int len = 0;
    int i = 1;
    lps[0] = 0; // lps[0] is always 0
  
    while (i < M) 
    {
        if (pat[i] == pat[len]) 
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
       
            if (len != 0) 
            {
                len = lps[len - 1];
  
            
            }
            else // if (len == 0)
            {
                lps[i] = len;
                i++;
            }
        }
    }
}
  
int KMPSearch(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
  
    int lps[M];
    int j = 0; 
    computeLPSArray(pat, M, lps);
  
    int i = 0; // index for txt[]
    int res = 0;
    int next_i = 0;
  
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
        if (j == M)
        {
      
            j = lps[j - 1];
            res++;
  
       
            if (lps[j] != 0)
                i = ++next_i;
            j = 0;
        }
  
        else if (i < N && pat[j] != txt[i])
        {
              
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
    return res;
}

void solve(int test){
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    int cost;
    string s1="CJ";
    string s2="JC";
    
    cost=x*KMPSearch(s1,s)+y*KMPSearch(s2,s);
    for(int i=0;i<s.length();i++){
        if(s[i]=='?'){
            s[i]='C';
            int cost1=x*KMPSearch(s1,s)+y*KMPSearch(s2,s);
            s[i]='J';
            int cost2=x*KMPSearch(s1,s)+y*KMPSearch(s2,s);
            if(cost1<cost2){
                s[i]='C';
            }
            cost=min(cost1,cost2);
        }
    }
    cout<<"Case #"<<test<<": "<<cost<<"\n";
    cout<<min(2,2);
    
}


int main(){
    int t; cin>>t;
    for(int tt=1;tt<=t;tt++){
        solve(tt);
    }
}