// Problem: B. Drinks
// Contest: Codeforces - Codeforces Round #126 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n ;
 cin >> n ;
 float a[n] ;
 
 double sum =0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  cin >> a[i] ;
  sum+=a[i] ;
 }
 
 cout << setprecision(20) << sum/n << endl ;
 
 
}