#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
 
{
  int n , k ;
  cin >> n >> k ;
 
  int total = 4*60 ;
  int left = total -k ;
int time[n+1] ;
time[0]=0 ;
for(int i =1 ;i<=n ;i++)
{
  time[i]=time[i-1]+5*i ;
 
}
 
  int l = 1 , h =n ;
  int s=0 ;
 
  while(l<=h)
  {
    int mid =(l+h)/2 ;
 
    if(time[mid]<=left)
    {
      s= mid ;
      l=mid+1 ;
    }
    else 
    {
      h= mid-1 ;
    }
  }
  cout << s << endl ;
 
 
 
}