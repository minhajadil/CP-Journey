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
 
 
 
ll binexp(ll a , ll b)
{
 
   ll ans =1 ;
 
   while(b!=0)
   {
    if(b&1) ans = (ans* a);
    b>>=1 ;
    a=(a*a) ;
   }
   return ans ;
 
}
 
 
 
 
void solve()
{
  
 
  int n ,q ; cin >> n >> q ;
 
  ull a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
 
  vector<int>pr[70+1] ;
 
  bool vis[70+1] ;
 
  memset(vis,false,sizeof vis) ;
 
  for(int i =0 ;i<n ;i++)
  {
    ull x =a[i] ;
 
    if(x%2==0)
    {
        int cnt =0 ;
        while(x%2==0)
        {
            cnt++ ;
            x/=2 ;
        }
        pr[cnt].push_back(i) ;
    }
  }
 
  while(q--)
  {
    int x ; cin >> x ;
 
    ull l = binexp(2,x-1) ;
 
    for(int i =x ;i<70 ;i++)
    {
        
        vector<int> cur = pr[i] ;
        for(int j = cur.size()-1 ;j>=0 ;j--)
        {
            a[cur[j]]+=l ;
            pr[x-1].push_back(cur[j]) ;
            cur.pop_back() ;
        }
 
        pr[i]= cur ;    
    }
  }
 
 
 
 
 
 
  for(int i =0 ;i<n ;i++)
  {
    cout << a[i] << " " ;
  }
 
  cout << endl ;
  
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
 
 
 
 
 
 