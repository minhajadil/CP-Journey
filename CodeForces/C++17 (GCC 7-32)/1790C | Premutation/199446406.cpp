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
    unordered_map<int,int>m ;
 
    for(int i =1 ;i<=n ;i++)
    {
      m[i]= n ;
    }
 
    vector<int> v[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      for(int j = 0 ;j<n-1 ;j++)
      {
        int x ;
        cin >> x ;
        v[i].push_back(x) ;
      }
    }
  
 
 
  for(int i =1 ;i<=n ;i++)
  {
    set<int> s ;
    for(int j =0 ;j<n ;j++)
    { 
      int x =0 ;
      for(int it : v[j])
      {
        if(it==i) { x=1 ; continue ;} 
        if(x==1)
        {
          s.insert(it) ;
      }
 
      }
    
    }
      m[i]=m[i]-s.size() ;
    s.clear() ;
  }
 
  int ar[n+1] ;
 
  for(int i =1 ;i<=n ;i++)
  {
    ar[m[i]]= i ;
  }
 
  for(int i =1 ;i<=n ;i++)
    {
      cout << ar[i] << " " ;
    }
    cout << endl ;
 
 
 
 
 
 
 
  
  }
}
  