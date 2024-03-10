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
  int n , m ; cin >> n >> m ;
  string a, b ; cin >> a >> b ;
 
  if(n==1) 
  {
    cout << "YES" << endl ;
    return ;
  }
 
  int pcheck=1 ;
 
  for(int i =0 ;i<n-1 ;i++)
  {
    if(a[i]==a[i+1])
    {
        pcheck=0 ;
    }
  }
 
  if (pcheck ==1)
  {
      cout << "yes" << endl ;
      return ;
  }
 
  int fcheck = 0 ;
 
 
 
  for(int i =0 ;i<m-1 ;i++)
  {
    if(b[i]==b[i+1])
    {
        fcheck =1 ;
    }
  }
 
  //cout << fcheck << endl ;
 
  if(fcheck ==1) 
  {
    cout << "No" << endl ;
    return ;
  }
 
  char s ;
  int scheck =0 ;
 
  for(int i =0 ;i<n-1 ;i++)
  {
    if(a[i]==a[i+1])
    {
        if(scheck==1 && s!=a[i])
        {
            scheck =2 ;
            break ;
        }
        else 
            {
                scheck=1 ;
                s=a[i] ;
            }
 
    }
  }
 
  if(scheck==0)
  {
    cout << "yes" << endl ;
    return ;
  }
 
  if(scheck==2)
  {
    cout << "no" << endl ;
    return ;
 
  }
 
  if(m==1)
  {
    
    
        if(s==b[0]) cout << "no" << endl ;
        else cout << "yes" << endl ;
    
  }
  else
  {
        if(s!=b[0] && s!=b[m-1]) cout << "yes" <<endl ;
        else cout <<"No" << endl ;
 
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
 
 
 
 
 
 