#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
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
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
///...........................//////////////
 
 
 
 
void solve()
{
  int b , h , c ;
  cin >> b >> h >> c ;
 
  if(h>c)
  {
    int m = min(b,c) ;
    b= b-m ;
 
    int r=0 ;
 
    if(b!=0)
    {
         r = min(b,h) ;
        b = b-r ;
    }
    if(b!=0)
    {
        cout << 2*(m+r)+1 << endl ;
    }
    else cout << 2*(m+r)-1 << endl ;
 
  }
  else 
  {
     int m = min(b,h) ;
    b= b-m ;
    int r=0 ;
     if(b!=0)
    {
        r=  min(b,c) ;
        b = b-r ;
    }
    if(b!=0)
    {
        cout << 2*(m+r)+1 << endl ;
    }
    else cout << 2*(m+r)-1 << endl ;
 
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
 
 
 
 
 
 