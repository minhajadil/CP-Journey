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
  int n  ; cin >> n ;
 
  int a[n] ;
  int mn = INT_MAX ; 
  int mx = -1 ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
    mn = min(a[i],mn) ;
    mx =max(a[i],mx) ;
  }
 
  if(n==1 || mn==mx)
  {
    cout << 1 << endl ;
    return ;
  }
 
  int dif =0 ;
 
  int flag =0 ;
  int ind = -1 ;
  int cnt =n ;
 
  for (int i =1 ;i<n-1 ;i++)
  {
 
    if(flag==0)
    {
        if(abs(a[i-1]-a[i]) +abs(a[i]-a[i+1])==abs(a[i-1]-a[i+1]))
        {
            ind = i-1 ;
            dif = abs(a[i-1]-a[i]) +abs(a[i]-a[i+1]) ;
            flag = 1 ;
            cnt-- ;
        }
    }
    else
    {
        if(dif+abs(a[i]-a[i+1])==abs(a[ind]-a[i+1]))
        {
            dif = dif+abs(a[i]-a[i+1]) ;
            cnt-- ;
        }
        else flag =0 ;
    }
 
  }
 
 // if(a[n-1]==a[n-2]) cnt-- ;
 
  cout << cnt << endl ;
  
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
 
 
 
 
 
 