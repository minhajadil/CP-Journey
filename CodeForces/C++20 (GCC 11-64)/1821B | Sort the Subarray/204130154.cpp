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
 
 
 
 
 
 
 
 
 
 
 
 
// observation 
// one : initital starting is where the two array started differing first , and the initi end is where it stopped differing
// second : but they said to print the largest 
// there might be a situation where after sorting the different portion the other portion make a new sorted portion
// thus we are expanding our answer to the left , and to the right 
 
 
 
 
 
 
 
 
 
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
    vector<int> b(n) ;
 
    for(auto & it : a) cin >> it ;
    for(auto &it : b) cin >> it ;
 
 
        int start =-1 , end =-1 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(start==-1)
        {
            if(a[i]!=b[i]) start = i ;
        }
        if(a[i]!=b[i]) end = i ;
    }
 
 
  while(start!=0 && b[start]>=b[start-1])
    {
        start-- ;
    }
 
    while(end!=n-1 && b[end]<=b[end+1])
    {
        end++ ;
    }
    
    cout << start+1 << " " << end+1 << endl ;
 
 
 
    
 
 
 
   
 
    
 
 
 
    }
 
 
 
 
 
}
 
 
 
 
 
 