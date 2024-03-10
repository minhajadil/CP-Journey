#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
 
  int  t ;
  cin >> t ;
 
 
 
  while(t--)
  {
    int n , m ;
    cin >> n >> m ;
 
    int a[n][m] ;
 
    for(int i =0 ; i<n ;i++)
    {
      for(int j =0 ;j<m ;j++)
      {
        cin >> a[i][j] ;
      }
    
    }
 
 
 
    long long mx = -1 ;
 
 
 
    for(int i=0 ;i<n ;i++)
    {
       long long sum =0 ;
       
 
      for(int j =0 ;j<m ;j++)
      {
        int x = i , y = j ;
        sum=0 ;
 
       
 
       while((x>=0 && x<n) && (y>=0 && y<m))
        {
          sum+=a[x][y] ;
          x++ ;
          y-- ;
          
      
        }
 
         x = i , y = j ;
     
 
        while((x>=0 && x<n) && (y>=0 && y<m))
        {
           sum+=a[x][y] ;
          x-- ;
          y-- ;
         
        }
         x = i , y = j ;
        
        while((x>=0 && x<n) && (y>=0 && y<m))
        { sum+=a[x][y] ;
          x-- ;
          y++ ;
          
        }
      x = i , y = j ;
        while((x>=0 && x<n) && (y>=0 && y<m))
        { sum+=a[x][y] ;
          x++ ;
          y++ ;
         
        }
        sum-=3*a[i][j] ;
 
    
       mx = max(mx,sum) ;
      }
 
      
      
       
    }
 
    cout << mx << endl ;
 
 
 
  }
}