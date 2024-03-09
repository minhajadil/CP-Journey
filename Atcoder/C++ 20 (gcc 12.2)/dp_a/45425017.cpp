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

const int N =1e5+10 ;
const int x = 1e9+10 ;

int height[N] ;
int dp[N] ;





int ans(int n)
{
    if(dp[n]!=x) return dp[n] ;
    if(n==1) return 0 ;
    if(n==2) return abs(height[n-1]-height[n]) ;

    int c1 = ans(n-1)+ abs(height[n-1]-height[n]) ;
    int c2 = ans(n-2) + abs(height[n-2]-height[n]) ;

    return dp[n] = min(c1,c2) ;  
  
}


void solve()
{


    for(int i =1 ;i<=N ;i++)
    {
        dp[i] =x ;
    }
    int n ; cin >> n ;

    for(int i =1 ;i<=n ;i++)
    {
        cin >> height[i] ;
    }

    cout << ans(n) << endl ;
}














int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif


   int t =1 ;
   while(t--)
   {

     solve() ;
    }

 



}






