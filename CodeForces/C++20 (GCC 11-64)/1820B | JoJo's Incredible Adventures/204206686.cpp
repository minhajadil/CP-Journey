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
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
ll ceiling(ll a , ll b )
{
return (a+b-1)/b ;
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
    string a ;
    cin >> a ;
    int flag1 =0 ; int flag0=0 ;
 
    
   string tmp=a  ;
     tmp+=tmp ;
    ll mx =-1 ;
 
    for(int i =0 ;i<tmp.size() ;i++)
    {
        ll cnt =0 ;
         if(tmp[i]=='1') flag1=1 ;
 
        while(tmp[i]=='1')
        {
            cnt++ ;
            i++ ;
        
        }
        if(tmp[i]=='0') flag0=1 ;
        mx=max(cnt,mx) ;
    }
 
    // cout << mx << endl ;
    // cout << flag0 << " " << flag1 <<endl ;
 
 
   if(flag0==0) cout << (ll)(a.size())*(a.size()) << endl ;
   else if(flag1==0) cout << 0 << endl ;
   else
   {
    ll x = ceiling(mx,2) ;
 
    if(mx%2==0) cout << x*(x+1) << endl ;
    else cout << x*x << endl ;
   
 
 
   } 
 
 
    
 
 
 
    }
 
 
 
 
 
}
 
 
 
 
 
 