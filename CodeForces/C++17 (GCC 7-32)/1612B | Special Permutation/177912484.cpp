// Problem: B. Special Permutation
// Contest: Codeforces - Educational Codeforces Round 117 (Rated for Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  
  int n , x, b ;
  cin >> n >> x >> b ;
  
  int a[n] ;
  a[0]=x ;
  a[n-1] = b ;
  
  vector<int>s ;
  vector<int> rr ;
  
  int f =1 ;
  
  for(int i = n ;i>=1 ;i--)
  {
    if((i!=x && i!=b) && f<n-1) {a[f]= i ;
   f++ ;}
  }
  int ff = (n/2)-1 ;
  int kk = 0 ;
  
  for(int i=0 ;i<n ;i++)
  {
   if(kk<=ff)
   {
    s.push_back(a[i]) ;
    kk++ ;
   }
   else rr.push_back(a[i]) ;
   
  }
  sort(s.begin(),s.end()) ;
  sort(rr.begin(),rr.end()) ;
  
  if(s.size()!=rr.size() || (s[0]!=x || rr[ff]!=b)) cout << -1 << endl;
  else
  {
   for(int i =0 ;i<n ;i++){
   
   cout << a[i] << " " ;
   }
   cout << endl ;
  }
 
 }
 
 
}