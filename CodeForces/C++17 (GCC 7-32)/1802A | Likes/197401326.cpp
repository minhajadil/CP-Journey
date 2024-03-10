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
 
  int cp =0 ;
  int cm =0 ;
  int s=0 ;
  int r=0 ;
  int a[n+1] ;
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
     if(a[i]>0) s++ ;
     else r++ ;
       }
 
  sort(a+1,a+n+1) ;
  reverse(a+1,a+n+1) ;
 
  for(int i =1 ;i<=n ;i++)
  {
    if(a[i]>0) { cp++ ; 
      cout << cp  << " " ; }
    else if(cp>0) { cp-- ; 
      cout << cp  << " " ;
    }
 
  }
  cout << endl ;
  int h =0 ;
 
 
int f=1 ;
 
  for(int i =1 ;i<=n ;i++)
  {
    if(r>0 && f==0)
    {
      cout << 0 << " " ;
      r-- ;
      f=1 ;
    }
    else if(r>0 && f==1) { cout << 1 << " " ; 
    f=0 ;
  }
    else if(r==0) { 
     
      cout <<  ++h << " " ;
    }
 
  }
  cout << endl ;
 
 
 
 }
 
 
 
 
}