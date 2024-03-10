#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int n , q ;
  cin >> n >> q ;
  int a[n] ;
 unordered_map<int,int> m ;
 
 
  for(int i =1 ;i<=n ;i++)
  {
    int x ;
    cin >> x ; 
    if(m[x]==0)
    {
      m[x]=i ;
    }  
  }
 
  while(q--)
  {
    int y ;
    cin >> y ;
 
    cout << m[y] << " " ;
 
 
    for(int i =1 ;i<=50 ;i++)
    {
      if(m[i]!=0)
      {
        if(m[i]<m[y])
        {
          m[i]++ ;
        } 
      }
 
    }
     m[y]=1 ;
 
 
  }
 
 
 
}