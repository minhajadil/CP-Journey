// Problem: B. BAN BAN
// Contest: Codeforces - Codeforces Round #832 (Div. 2)
 
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
  
  int cnt = n/2 + n%2 ;
   int start = 1 ;
   int end =3*n ;
   
   cout << cnt << endl ;
   
   while(start<end)
   {
    cout << start << " " << end << endl ;
    start+=3 ;
    end-=3 ;
    
   }
   
    
 }
 
 
}