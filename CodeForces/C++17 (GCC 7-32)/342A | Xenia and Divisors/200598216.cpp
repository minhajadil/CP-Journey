#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
int main()
{
 
  int n ;
  cin >> n ; 
  //int a[n] ;
  map<int,int > m ;
  int h =1 ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ;
    cin >> x ;
   if(x==7 || x==5) h=0 ;
   else m[x]++ ;
  }
 
 
  ll re_6 = m[6]-m[3] ;
  ll k = n/3 ;
 
  if(m[1]!=k || h==0 || re_6<0 || re_6+m[4]!=m[2] || m[1]>k || m[2]>k || m[3]>k || m[6]>k)
  {
    cout << -1 << endl ;
  }
  else
  {
    
    while(m[4]!=0)
    {
      cout << "1 2 4" << endl  ;
      m[4]-- ;
    }
    m[6]= m[6]-m[3] ;
     while(m[6]!=0)
    {
      cout << "1 2 6" << endl ;
      m[6]-- ;
    }
   
    while(m[3]!=0)
    {
      cout << "1 3 6" << endl ;
      m[3]-- ;
     
    }
    
  }
 
 
 
 
 
  
}