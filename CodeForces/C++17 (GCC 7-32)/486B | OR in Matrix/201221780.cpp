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
 
 
   int m , n ;
   cin >> m >> n ;
 
   int a[m][n] ;
   int ne[m][n] ;
 
 
   for(int i =0 ; i<m ;i++)
   {
    for(int j =0 ;j<n ;j++)
    {
      cin >> a[i][j] ;
      ne[i][j]= a[i][j] ;
    }
   }
   
   for(int i =0 ;i<m ;i++)
   {
    for(int j =0 ;j<n ;j++)
    {
      if(a[i][j]==0)
      {
        int x = 0 , y =0 ;
 
        while(x<n || y<m)
        { debug(x)
          ne[i][x]=0 ;
          ne[y][j]=0 ;
         if(x<n) x++ ;
         if(y<m) y++ ;
        } 
      }        
 
      
    }
  }
 
  int r= 1;
 
 
 
 
    for(int i =0 ;i<m ;i++)
    {
      for(int j =0 ;j<n ;j++ )
      {
        int cnt =0 ;
        if(a[i][j]==1)
        {
           int  x=0 , y =0 ;
           while(x<n && y<m)
        {
          if(ne[i][x]==1) cnt++ ;
          if(ne[y][j]==1) cnt++ ;
          x++ ;y++ ;
        } 
        if(cnt==0) 
        {
          r=0 ;
          break ;
        } 
 
 
        }
 
      }
    }
   
 
if(r==0) cout << "NO" << endl ;
else 
{
  cout << "YES" << endl ;
  for(int i =0 ;i<m ;i++)
  {
    for(int j =0 ;j<n ;j++)
    {
      cout << ne[i][j] << " " ;
    }
    cout << endl ;
  }
}
 
 
 
 
 
 
}
 
 
 
 
 
 