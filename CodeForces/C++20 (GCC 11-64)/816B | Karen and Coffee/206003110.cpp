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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
  
    int n , k , q ;
    cin >> n >> k >> q ;
 
    vector<int>result(200000+2,0) ;
 
    for(int i =1 ;i<=n ;i++)
    {
      int l , r ;
      cin >> l >> r ;
      result[l]+=1 ;
      result[r+1]-=1 ;
    }
 
    for(int i =1 ;i<=200000 ;i++)
    {
      result[i]= result[i-1]+result[i] ;
    }
 
    for(int i =1 ;i<=200000 ;i++)
    {
      if(result[i]>=k) result[i]=1 ;
      else result[i]= 0 ;
    }
     for(int i =1 ;i<=200000 ;i++)
    {
      result[i]= result[i-1]+result[i] ;
 
     //if(i>=91 && i<=99) cout << result[i] << " " ;
    }
    cout << endl ;
 
 
    while(q--)
    {
      int l , r ;
      cin >> l >>r ;
 
      cout << result[r]-result[l-1] << endl ;
    }
 
 
 
 
    
    
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 