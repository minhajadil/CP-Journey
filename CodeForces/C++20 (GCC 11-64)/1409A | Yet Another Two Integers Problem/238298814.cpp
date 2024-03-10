#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
void solve()
{
  int a , b ; cin >> a >> b ;
 
  int need =abs(a-b) ;
  if(need%10) cout <<(need/10)+1 << endl ;
  else cout << need/10 << endl ;
  
}
 
 
 
int main()
{
 
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 