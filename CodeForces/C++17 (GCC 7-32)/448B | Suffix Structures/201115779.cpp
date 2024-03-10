#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
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
 
 
 
    string a , b ;
    cin >> a >> b ;
 
 
 
 
 
    int sa = a.size() ;
    int sb = b.size() ;
 
if(sa<sb) cout << "need tree" << endl ;
else 
{
 
    
    sa = a.size() ;
    sb= b.size() ;
 
    int ar =0 ;
    auto it = a.find(b) ;
if(it!=string::npos)
{
  ar=1 ;
}
 
int at=0 ;
int j =0 ;
 
for(int i =0 ;i<a.size() ;i++)
{// debug(a[i]) ; debug(a[j]) ;
  if(a[i]==b[j])
  {
     j++ ;
  }
}
if(j==b.size()) at=1 ;
 
 
 
 sort(all(a)) ;
 sort(all(b)) ;
 
  int  both=0 ;
 
   it = a.find(b) ;
if(it!=string::npos)
{
  both=1 ;
}
 
int at2 =0 ;
 
j=0 ;
for(int i =0 ;i<a.size() ;i++)
{// debug(a[i]) ; debug(a[j]) ;
  if(a[i]==b[j])
  {
     j++ ;
  }
}
if(j==b.size()) at2=1 ;
 
//cout << both << endl ;
debug(a) ; debug(b) ;
 
 
 
if(sa!=sb && at==1 ) cout << "automaton" << endl ;
else if(sa!=sb && at!=1 && both==1 ) cout << "both" << endl ;
else if(sa!=sb && at2==1) cout << "both" << endl ;
else if(sa==sb && both==1 ) cout << "array" << endl ;
else cout << "need tree" << endl ;
 
 
}
 
 
 
 
 
 
 
    
  }
 
 
 
 
 
 
 
 
 
 
 
 