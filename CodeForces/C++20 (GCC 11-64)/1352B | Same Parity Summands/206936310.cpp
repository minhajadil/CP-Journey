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
////.......... debugger .........................//
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//////............................./////////////////
 
 
ll n , k ;
 
void solve()
{
  cin >> n >> k ;
 
  if(n<k)
  {
    cout << "NO" << endl ;
    return ;
  }
 
  if(n%k==0)
  {
    cout << "YES" << endl ;
 
    for(int i =1 ;i<=k ;i++)
    {
      cout << n/k << " " ;
    }
    cout << endl ;
    return ;
  }
 
  // case 1 : quotient even , remainder even or quotient odd , remainder even
 
  ll q = n/k ;
  ll r = n%k ;
 
  if((q%2==0 && r%2==0) || (q%2!=0 && r%2==0))
  {
    cout << "YES" << endl ;
    cout << q+r << " " ;
 
    for(int i=2 ;i<=k ;i++)
    {
      cout << q << " " ;
    }
 
    cout << endl ;
  }
 
 else if(q>1 && k>2 && (k-1)%2==0)
  {
    cout << "YES" << endl ;
 
    cout << q+r << " " ;
    int f =0 ;
 
    for(int i=2 ;i<=k ;i++)
    {
      if(f)
      {
        cout << q+1 << " " ;
        f=0 ;
      }
      else 
      {
        cout << q-1 << " " ;
        f=1 ;
      }
 
    }
 
    cout << endl ;
  }
  else cout << "NO" << endl ;
 
  
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
 
 
 
 
 
 