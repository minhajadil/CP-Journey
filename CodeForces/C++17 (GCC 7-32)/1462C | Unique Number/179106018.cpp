// Problem: C. Unique Number
// Contest: Codeforces - Codeforces Round #690 (Div. 3)
 
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
  cin>> n ;
  int sum=n ;
  vector<int> v ;
  
 
   //cout << sum << endl ;
   for(int i =9 ;i>=1 ;i--)
   {
    if(i<=sum)
    {
     v.push_back(i) ;
     sum-=i ;
    }
   }
   
   sort(v.begin(),v.end()) ;
  
  
  if(sum==0) {
   for(auto it : v)
   {
    cout << it ;
   }
   cout << endl ;
  }
  else cout << -1 << endl ; }
 
 
}