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
 
  int l =1 ;
  int r = n ;
 
  while(l<=r)
  {if(l==r) { cout << l  ; break ;}
    cout << l << " " << r << " " ;
    
    l++ ;r-- ; 
  }
  cout << endl ;
 
 
 
  }
}