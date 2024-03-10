// Problem: A. Chips Moving
// Contest: Codeforces - Codeforces Round #582 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n ;
 cin >> n ;
 
 int a[n] ;
 
 for(int i =0 ;i<n ;i++)
 {
  cin>> a[i] ;
 }
 int cnt =INT_MAX ;
 
 int sum=0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  sum=0 ;
  for(int j =0 ;j<n ;j++)
  {
  if(i!=j) sum+=abs(a[i]-a[j])%2 ;
  
  }
  //cout << sum << endl ;
  
  if(sum<cnt) cnt = sum ;
 }
 
 cout << cnt << endl ;
 
}