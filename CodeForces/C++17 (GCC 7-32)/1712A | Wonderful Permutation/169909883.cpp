#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 while(t--)
 {
 int n , k ;
 cin >> n >> k ;
 
 
 
 int a[n] ;
 set<int > s ;
 unordered_set<int > s1 ;
 
 for(int i =0 ;i<n ;i++) 
 {
 
  cin >> a[i] ;
  if(i<k) s.insert(a[i]) ; 
 }
 
 
 
 int cnt =0 ;
 
 sort(a,a+n) ;
 
 
 for(int i =0 ;i<k ;i++)
 {// cout << s.count(a[i]) << endl ;
  if(s.count(a[i])!=1) cnt++ ;
 }
 cout << cnt << endl ;
 
 
 
 
}
}
 
 