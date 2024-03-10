#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
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
#define vc vector
#define vi vc<int>
#define vll vc<ll>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
ll llmin(ll a , ll b){if(a<b) return a ; else return b ;}
ll llmax(ll a , ll b) {if(a>b) return a ; else return b ;}
 
 
///...........................//////////////
 
 
 
 
void solve()
{
  int n ;
  cin >> n ;
 
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >>a[i] ;
  }
 
  int b[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    b[i]=1 ;
  }
 
  int first_pair =0 ;
  int second_pair = 0 ;
  int x = -1 ;
 
  for(int i =0 ;i<n-1 ;i++)
  {
    for(int j=i+1 ;j<n ;j++)
    {
        if(a[i]==a[j] && first_pair==0)
        {
           
            b[i]=1 ; b[j]=2 ;
            first_pair =1 ;
            x=a[i] ;
        }
        else if(a[i]==a[j] && x!=a[i] && second_pair==0)
        {
            second_pair=1 ;
            b[i]=1 ; b[j]=3 ;
        }
 
    }
  }
 
  //cout << first_pair << " " << second_pair << endl ;
 
  if(first_pair==1 && second_pair==1)
  {
    for(auto it : b)
    {
        cout << it << " " ;
    }
    cout << endl ;
  }
  else cout << -1 << endl ;
  
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
 
 
 
 
 
 