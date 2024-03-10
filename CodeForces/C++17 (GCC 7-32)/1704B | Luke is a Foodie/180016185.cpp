// Problem: B. Luke is a Foodie
// Contest: Codeforces - CodeTON Round 2 (Div. 1 + Div. 2, Rated, Prizes!)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int n , x ;
  cin >> n >> x ;
  
  int a[n] ;
  
  int l =0 , r = 1000000000+7 ;
  
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  
  //l = a[0] ; r= a[0] ;
  
  int cnt =0 ;
  
  for(int i =0 ;i<n ;i++)
  { //  cout << a[i]-x << " " << a[i]+x << endl ;
   if(a[i]-x>r || a[i]+x<l)
   {
    l = a[i]-x ;
    r=a[i]+x ;
    cnt++ ;
   }
   else 
   {
    l= max(l,a[i]-x) ;
    r= min(r,a[i]+x) ;
    }
       
   
  }
  
  
  cout << cnt << endl ;
  
  
 }
 
 
}