#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
 int n ;
 cin >> n ;
 int max = 0 ;
 int r = 0 ;
 int a , b ;
  cin >> a >> b ;
  r+=b ;
 
 for(int i =1 ;i<n ;i++)
 {
  if(max<r) max =r ;
 
  cin >> a >> b ;
  r=r-a ;
  r+=b ;
 
 }
 cout << max<< endl ;
 
 
 
 
 
 
}