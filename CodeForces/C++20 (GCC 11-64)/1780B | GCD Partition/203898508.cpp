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
    int n ;
    cin >> n ;
    int a[n] ;
 
    long long sum =0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        sum+=a[i] ;
    }
 
    long long mx =-1 ;
    long long sum_left=0 ;
 
    for(int i= 0 ;i<n-1 ;i++)
    {
        
        sum_left+=a[i] ;
        long long sum_right = sum-sum_left ;
 
        mx = max(mx,__gcd(sum_left,sum_right)) ;
    }
 
    cout << mx << endl ;
 
// it is always good to divide the seq in two parts 
    //why ?
 
    // suppose we have a seq of 1 2 | 3 | 3 | 3 . and we divided them into three parts 
    // now the gcd(3,3,3,3)=3 
    // if we combine the left part 1 2 3 | 3 | 3  gcd(6,3,3) =3 // the gcd is not decreasing. Because any number that divides both sum(AB) and sum(C) must also divide sum(A), sum(B), and sum(C).
    // if combine the right two part we get gcd(6,6)=6 // the gcd is increased.
 
 
 
 
    
 
 
 
    }
 
 
 
 
 
}
 
 
 
 
 
 