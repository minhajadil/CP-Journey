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
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
///...........................//////////////
 
 
 
 
void solve()
{
   
   int n , k ;cin >> n >> k ;
 
   vector<int> a(n) ;
 
   for(auto &it : a) cin >> it ;
 
   vector<int> tmp(n) ;
   tmp =  a;
 
   sort(all(tmp)) ;
 
   map<int,int>mp ;
 
   for(int i =0 ;i<n ;i++)
   {
    mp[tmp[i]]= i ;
   }
 
 
   int cnt =1 ;
 
   for(int i =1 ;i<n ;i++)
   {
    if(mp[a[i]]-1<0) cnt++ ;
    else if(tmp[mp[a[i]]-1]!=a[i-1]) cnt++ ;
   }
 
   if(cnt<=k) cout << "Yes" << endl ;
   else cout << "NO" << endl ;
 
 
 
  
 
 
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
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 