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
#define ff first
#define second ss 
 
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
 
 
 
// idea is to use difference array
// we have to consider the subsequence to get the R position
// if the size of ar is n , and op ar size is m , then the b1 element will be added last to the (n-m+1) position 
// and consecutive b2 will be added to (n-m+1)+1 position and so on..
 
 
// jodi b1 (n-m+1) e last boshe tahole b2 obosshoi b1 er porer position (n-m+1)+1 ei last boshbe , and so on
 
 
 
 
 
 
ll m , n , c ;
 
ll a[1000000] ;
ll dif[100000+2] ;
 
ll b[100000+1] ;
 
void solve()
{
  cin >>n >>m >> c ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
  }
 
  for(int i =1 ;i<=m ;i++)
  {
    cin >> b[i] ;
    dif[i]+=b[i] ;
    dif[n-m+1+i]-=b[i] ;
  }
 
  for(int i =1 ;i<=n ;i++)
  {
    dif[i]= dif[i-1]+dif[i] ;
  }
 
  for(int i =1 ;i<=n ;i++)
  {
    cout << (a[i]%c+dif[i]%c)%c << " " ;
  }
 
  cout << endl ;
 
 
 
 
 
 
  
  
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
 
 
 
 
 
 