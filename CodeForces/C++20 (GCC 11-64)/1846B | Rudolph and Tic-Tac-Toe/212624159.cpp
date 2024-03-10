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
  string a , b , c ;
  cin>> a >> b >> c ;
 
  int win = 0 ;
 
  if((a[0]==a[1] && a[1]==a[2])) 
  {
    if(a[0]=='X') win = 1 ;
    else if(a[0]=='O') win=2 ;
    else if(a[0]=='+') win =3 ;
  }
   if((b[0]==b[1] && b[1]==b[2]))
  {
 
     if(b[0]=='X') win = 1 ;
    else if(b[0]=='O') win=2 ;
    else if(b[0]=='+') win =3  ;
 
  }
 if((c[0]==c[1] && c[1]==c[2]))
{
     if(c[0]=='X') win = 1 ;
    else if(c[0]=='O') win=2 ;
    else if(c[0]=='+') win =3 ;
 
}
   if((a[0]==b[1] && b[1]==c[2]))
  {
    if(a[0]=='X') win = 1 ;
    else if(a[0]=='O') win=2 ;
    else if(a[0]=='+') win =3 ;
 
  }
   if((a[2]==b[1] && b[1]==c[0]))
  {
    if(a[2]=='X') win = 1 ;
    else if(a[2]=='O') win=2 ;
    else if(a[2]=='+') win =3 ;
 
  }
   if((a[0]==b[0] && b[0]==c[0])  )
  {
    if(a[0]=='X') win = 1 ;
    else if(a[0]=='O') win=2 ;
    else if(a[0]=='+') win =3 ;
 
  }
   if((a[2]==b[2] && b[2]==c[2]))
  {
    if(a[2]=='X') win = 1 ;
    else if(a[2]=='O') win=2 ;
    else if(a[2]=='+') win =3 ;
 
  }
   if((a[1]==b[1]&& b[1]==c[1]))
  {
    if(a[1]=='X') win = 1 ;
    else if(a[1]=='O') win=2 ;
    else if(a[1]=='+') win =3 ;
 
  }
 
  if(win==1) cout << 'X' << endl ;
  else if(win==2) cout << 'O' << endl ;
  else if(win==3) cout << '+' << endl ;
  else cout << "DRAW" << endl ;
 
 
  
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
 
 
 
 
 
 