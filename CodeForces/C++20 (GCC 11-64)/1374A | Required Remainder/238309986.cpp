#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
void solve()
{
 int x , y , n ; cin >> x >> y >> n ;
 
 
 
 
 if((n%x)>y) cout << n-((n%x)-y) << endl ;
 else if((n%x)<y) cout << x*(n/x)+(y-x) << endl ;
 else cout << n << endl ;
  
}
 
 
 
int main()
{
 
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 