// mistake : the max number of inversion can be n(n-1)/2
// it will overflow in integer 
 
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
 
 
 
 
 
 
ll cntinv(vector<int>a )
{
 
    ll cnt =0 ;
    ll now = 0 ;
 
    for(int i =a.size()-1 ;i>=0 ;i--)
    {
        if(a[i]==0)
        {
            now++ ;
        }
        if(a[i]==1) cnt+=now ;
    }
 
return cnt ;
 
 
}
 
 
 
 
// the idea is that we have two option either make a one to zero , and make a zero to one
// now it is always good to change the most right zero to one and most left one to zero , as it increases the number of inversion
// also ,without changing anything is a possibility,
// we will check these condition and output the maximumm 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
   int t ; cin >> t ;
   while(t--)
   {
    int n ;
    cin >> n ;
    vector<int> a(n) ;
 
    for(auto &i : a) cin >> i ;
 
    ll initial = cntinv(a) ;
 
    int firstzero =-1 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(a[i]==0)
        {
            firstzero= i ;
            break ;
        }
    }
 
    ll fcount =0 ; // count after changing the first zero to one
 
    if(firstzero!=-1)
    {
        a[firstzero] = 1 ;
        fcount = cntinv(a) ;
        a[firstzero]=0 ; // undoing the step 
    }
 
    int lastone = -1 ;
      
      for(int i =n-1 ;i>=0 ;i--)
      {
        if(a[i]==1) {
 
            lastone=i ;
            break ;
        }
      }
 
      ll lcount =0 ;
 
      if(lastone!=-1)
      {
 
        a[lastone]= 0 ;
        lcount= cntinv(a) ;
      }
 
 
 
     // cout << initial << " " << fcount << " " << lcount << endl ;
 
      cout << max({initial,fcount,lcount}) << endl ;
 
 
 
    }
 
 
 
 
 
}
 
 
 
 
 
 