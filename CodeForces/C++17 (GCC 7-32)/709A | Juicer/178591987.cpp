// Problem: A. Juicer
// Contest: Codeforces - AIM Tech Round 3 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n , b , d;
 cin >> n >> b >> d ;
 
 int a[n] ;
 
 for(int i =0 ;i<n ;i++)
 {
  cin >> a[i] ;
 }
 long long sum =0 ;
 int cnt =0 ;
 
 for(int i =0 ;i<n ;i++)
 {
  if(a[i]<=b) sum+=a[i] ;
  if(sum>d) 
  {
   sum=0 ;
   cnt++ ;
  }
 }
 
 cout << cnt << endl ;
 
 
 
 
}