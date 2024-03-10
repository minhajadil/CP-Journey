// Problem: A. Oath of the Night's Watch
// Contest: Codeforces - Divide by Zero 2017 and Codeforces Round #399 (Div. 1 + Div. 2, combined)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n ;
 cin >> n ;
 int a[n] ;
 
 for(int i =0 ;i<n;i++)
 {
  cin >> a[i] ;
 }
 
 sort(a,a+n) ;
 int min = a[0] ;
 int max = a[n-1] ;
 int cnt=0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  if(a[i]>min && a[i]<max) cnt++ ;
 }
 cout << cnt << endl ;
 
 
}