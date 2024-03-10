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
  int k , n , m ; cin >> k >> n >> m ;
  vector<int> a(n) ; vector<int> b(m) ;
  for(auto &it : a) cin >> it ;
  for(auto &it :b) cin >> it ;
 
 
  int x =0 ;
 
  int i=0 , j = 0 ;
 
  vector<int> ans ;
  int ps =1 ;
 
  while(i<n || j<m)
  {
 
    if(i==n)
    {
        if(b[j]==0) { k++ ; ans.pb(b[j]) ;}
        else if(k<b[j])
        {
            ps =-1 ; break ;
        }
        else ans.pb(b[j]) ;
        j++ ; 
    }
    else if(j==m)
    {
         if(a[i]==0) { k++ ; ans.pb(a[i]) ;}
        else if(k<a[i])
        {
            ps =-1 ; break ;
        }
        else ans.pb(a[i]) ;
        i++ ;
    }
 
    else {
 
 
    if(a[i]==0)
    {
        k++ ;
        
        ans.pb(a[i]) ;
        i++ ;
    }
    else if(b[j]==0)
    {
        k++ ;
       
        ans.pb(b[j]) ;
         j++ ;
 
    }
    else
    {
 
        if(a[i]>k)
        {
            if(b[j]>k)
            {
                ps = -1 ;
                break ;
            }
            else
            {
                ans.pb(b[j]) ;
                j++ ;
            }
        }
        else
            {
                ans.pb(a[i]) ;
                i++ ;
            }
 
    }
}
 
  }
 
if(ps==-1) cout << -1 << endl ;
else
{
    for(auto it : ans) cout << it << " " ;
 
    cout << endl ;
}
 
 
 
 
 
 
 
  
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
 
 
 
 
 
 