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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 int al[26] ;
 
 
int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
string a, b ;
cin >> a >> b ;
 
for(int i =0 ;i<a.size() ;i++)
{
  al[a[i]-'a']++ ;
}
for(int i =0 ;i<b.size() ;i++)
{ 
  al[b[i]-'a']-- ;
}
 
int at=0 ,ar=1, t =0 ;
 
int j =0 ;
for(int i =0 ;i<a.size();i++)
{
  if(a[i]==b[j]) j++ ;
}
if(j==b.size() && a.size()>b.size()) cout << "automaton" << endl ;
else 
{
 
 
for(int i =0 ;i<26 ;i++)
{
 // cout << al[i] << endl ;
 
  if(al[i]!=0) ar=0 ;
  if(al[i]<0) t=1 ;
}
 
 
 
if(ar==1) cout << "array" << endl ;
else if(t!=1) cout << "both" << endl ;
else cout << "need tree" << endl ;
 
// we  can alwats delete elements from a. so a[i]>0 always works 
 
 
}
 
 
 
 
 
 
 
 
 
 
}
 
 
 
 
 
 