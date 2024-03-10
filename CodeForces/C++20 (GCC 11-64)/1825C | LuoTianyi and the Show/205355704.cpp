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
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
    int n , m ;
    cin >>n >> m ;
 
    int lc =0 ;
    int rc=0 ;
 
    set<int>exact ;
 
    for(int i =0 ;i<n ;i++)
    {
      int x ;
      cin >> x ;
      if(x==-1) lc++ ;
      else if(x==-2) rc++ ;
      else exact.insert(x) ;
    }
    int mx ;
 
    int r = max(lc+exact.size(),rc+exact.size()) ;
 
 
     mx= min(m,r)  ;
 
    int at_index =0 ;
 
 
    for(auto it : exact)
    {
       int remaining_seat_on_the_left = it-1 ;
       int remaining_person_that_can_be_sitted_left= lc+at_index ;
       int remaining_seat_on_the_right = m-it ; 
       int remaining_person_that_can_be_sitted_right = rc+exact.size()-at_index-1 ;
      mx = max(mx,min(remaining_seat_on_the_left,remaining_person_that_can_be_sitted_left)+min(remaining_person_that_can_be_sitted_right,remaining_seat_on_the_right)+1) ;
      at_index++ ;
    }    
 
 
    cout << mx << endl ;
 
 
 
    }
 
 
 
 
 
}
 
 
 
 
 
 