// Problem: C. Advantage
// Contest: Codeforces - Codeforces Round #835 (Div. 4)
 
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
  long long a[n] ;
  long long b[n] ;
  
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
   b[i]=a[i] ;
  }
  
  sort(b,b+n) ;
  for(int i =0 ;i<n ;i++)
  {
   if(a[i]!=b[n-1]) cout << a[i]-b[n-1] << " " ;
   else cout << a[i]-b[n-2] << " ";
  }
  cout << endl ;
  
  
 }
}