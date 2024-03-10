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
 
// Idea : Idea is to generate all possible combination starting from max_sum =0 , min_sum = pref[2*(k-i)] 
// i starts from 0 , means , we are not taking any max element rn 
 
 
 
 
 
void solve()
{
    int n , k ; cin >> n >> k ;
 
    ll a[n] ;
    ll pref[n+1] ;
    pref[0] =0 ;
 
    for (int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
 
    }
 
    sort(a,a+n) ;
 
    for(int i =1 ;i<=n ;i++)
    {
        pref[i]= pref[i-1]+a[i-1] ;
    }
 
    ll ans =0 ;
 
 
    for(int i =0 ;i<=k ;i++)
    {
        ans = max(ans,pref[n-i]-pref[2*(k-i)]) ;
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
 
 
 
 
 
 