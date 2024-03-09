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

const int N = 1e5+10 ;


ll a[N] ,b[N] ,c[N] ;

int n ; 

ll dp[N][3] ;



ll max_fun(int i , int prev)
{

    if(i==n+1) return 0 ;

    if(dp[i][prev]!=-1) return dp[i][prev] ;

    ll c1 =0 , c2 =0 ,c3 =0 ;

    if(prev!=0)c1 = max_fun(i+1,0) + a[i] ;
    if(prev!=1)c2 = max_fun(i+1,1) + b[i] ;
    if(prev!=2)c3 = max_fun(i+1,2) + c[i] ;


    return dp[i][prev] = llmax(llmax(c1,c2),c3) ;


}





void solve()
{
    memset(dp,-1 , sizeof dp) ;
    cin >> n ;


    for(int  i =1 ;i<=n ;i++)
    {
        cin >> a[i] >> b[i] >> c[i] ;
    }


    cout << max_fun(1,-1) << endl ;
    

  
  
}










int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif


   int t =1;
   while(t--)
   {

     solve() ;
    }

 



}






