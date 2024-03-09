#include<bits/stdc++.h>
using namespace std ;

//...............// define///.................... //

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


/////////////......................................//////////////


const int N = 1e5+10 ;

const int x = 1e9+10 ;

int weight[101] ;
int cost[101] ;
ll dp[101][100005] ;

int n ;


ll ans(int i ,int weight_left)
{

   if(i>n) return 0 ;
   if(dp[i][weight_left]!=-1) return dp[i][weight_left] ;
    
    ll pick=0  ;

    if(weight_left>=weight[i])
   
   {  pick = ans(i+1,weight_left-weight[i])+cost[i] ;
}
    ll not_pick = ans(i+1,weight_left) ;
    ll mx = llmax(pick,not_pick) ;

    return dp[i][weight_left]=mx ;
}









void solve()
{
    memset(dp,-1,sizeof dp) ;



     int  w ; cin >> n >> w ;

    for(int i =1 ;i<=n ;i++)
    {
        int x ,y ; cin >> x >> y ;
        weight[i] = x ; cost[i]= y ;

    }

    

   cout << ans(1, w) << endl  ;

  
  
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






