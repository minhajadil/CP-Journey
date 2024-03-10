#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int n ;
  cin >> n ;
  int count[3]={0} ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++) 
  {
    cin >> a[i] ;
    count[a[i]]++ ;
  }
  int x = 0 ;
 
 
  for(int i =0 ;i<n ;i++)
  {
    if(x<2 && count[1]!=0 && count[2]!=0)
    {
      cout << 2 << " " << 1 << " " ;
      x+=2 ;
      count[1]-- ;
      count[2]-- ;
    }
    else if(count[2]!=0) 
      {cout << 2 << " " ;
    count[2]-- ;}
    else if(count[1]!=0) { cout << 1 << " " ;
    count[1]-- ;}
  }
  cout << endl ;
 
 
 
 
}