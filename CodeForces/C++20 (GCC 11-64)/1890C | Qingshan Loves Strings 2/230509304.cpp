#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
ll llmin(ll a , ll b){if(a<b) return a ; else return b ;}
ll llmax(ll a , ll b) {if(a>b) return a ; else return b ;}
 
 
///...........................//////////////
 
 
 
 
void solve()
{
  int n ; cin >> n ;
  string a ; cin >> a ;
 
  deque<char> dq ; 
 
  for(int i =0 ;i<n ;i++)
  {
    dq.push_back(a[i]) ;
  }
 
  int l =0 , r = n ;
 
  int operation =300 ;
 
  bool np = false ;
  vector<int> ans ;
 
  int op =0 ;
 
 
  while(!dq.empty())
  {
 
    char x = dq.front() ; char y = dq.back() ;
  
    if(operation<1)
    {
        np = true ; break ;
    }
 
    if(x!=y)
    {
        dq.pop_front() ; dq.pop_back() ;
        l++ ; r-- ;
    }
    if(x==y)
    {
        if(x=='0')
        {
            ans.push_back(r) ;
            dq.pop_front() ;
            dq.push_back('0') ;
 
            r++ ; l++ ;
            op++ ; operation-- ;
 
        }
        else
        {
             ans.push_back(l) ;
            dq.pop_back() ;
            dq.push_front('1') ;
            l++ ; r++ ;
            op++ ;
            operation-- ;
        }
    }
  }
 
 
 
  if(np==true) cout << -1 <<endl ;
  else
  {
    cout << op << endl ;
    for(auto it : ans) cout << it << " " ;
    cout << endl ;
  }
 
 
  
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 