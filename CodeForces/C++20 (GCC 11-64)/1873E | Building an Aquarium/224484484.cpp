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
 
 
const int N =200010 ;
 
 
ll a[N] ;
 
 
bool check(ll h,ll f,ll x)
{
    ll diff =0 ;
 
    for(int i =0 ;i<f ;i++)
    {
     if(h>a[i])  diff+= (h-a[i]) ; 
    }
 
    if(diff<=x) return true ;
    else return false ;
}
 
 
 
 
void solve()
{
    ll n , k ; cin >> n >> k ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin>> a[i] ;
 
    }
    
 
    ll lo =1 , hi = INT_MAX , mid ;
    ll ans =1 ;
 
    while(lo<=hi)
    {
        mid = lo + (hi - lo) / 2;
 
        if(check(mid,n,k)) 
        {
            ans=mid ;
            lo=mid+1 ;
        }
        else 
        {
            hi= mid-1 ;
        }
    }
 
    cout << ans << endl ;
 
  
  
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
 
 
 
 
 
 
 