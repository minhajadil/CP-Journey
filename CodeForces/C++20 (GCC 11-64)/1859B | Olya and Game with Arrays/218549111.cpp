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
 
 
///...........................//////////////
 
 
 
 
void solve()
{
  int n ;
  cin >> n ;
  ll sum1=0 ;
ll sum2 =0 ;
ll mn = 1e18 ;
vector<ll> seco ;
ll mn1 =1e18 ;
 
  for(int i =0 ;i<n ;i++)
  {
    
    int k ; cin >> k ;
 
 
    vector<ll> ar(k) ;
 
    for(auto &it : ar) cin >>it ;
    sort(all(ar)) ;
 
    sum1+=ar[0] ;
 
    if(ar[0]<mn1) mn1 = ar[0] ;
 
     seco.push_back(ar[1]) ;
    if(mn>ar[1]) mn = ar[1] ; 
  }
 
  if(n==1) 
  {
    cout << mn1 << endl ;
    return ;
  }
 
  bool fl =0 ;
 
  for(int i =0 ;i<seco.size() ;i++)
  {
    if(fl==0 && seco[i]==mn)
    {
        fl=1 ;
    }
    else sum2+=seco[i] ;
  }
 
  cout << max(sum2+mn1,sum1) << endl ;
 
  
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
 
 
 
 
 
 