// Problem: B. Kevin and Permutation
// Contest: Codeforces - Codeforces Round #829 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int n ;
  cin >> n ;
  
  int x = n/2+1 ;
  int r=1 ;
  int i=1 ;
  
  while(x<=n && i<=n/2)
  {
   if(r==1){ cout << x << " " ;
   x++ ;
   r=2 ;
   }
   
   if(r==2){ cout << i << " " ;
   i++ ;
   r=1 ;
   }
  }
  if(n%2!=0) cout << n << " " ;
  cout << endl ;
 
 
}
}