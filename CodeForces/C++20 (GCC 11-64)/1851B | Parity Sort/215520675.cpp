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
 
 
 
void solve()
{
 int n ;
 cin  >> n ;
 
 vector<int> a(n) ;
 vector<int> tmp(n) ;
 
 for(auto &it :a) cin >> it ;
 
 tmp = a ;
 
sort(all(tmp)) ;
 
for(int i =n-1 ;i>=0 ;i--)
{
 if(tmp[i]%2==0     && a[i]%2!=0)
 {
  cout << "NO" << endl;
  return  ;
 }
 else if(tmp[i]%2!=0 && a[i]%2==0)
 {
  cout << "NO" << endl;
  return  ;
 }
 
}
 
cout << "YES" << endl ;
 
 
 
 
 
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