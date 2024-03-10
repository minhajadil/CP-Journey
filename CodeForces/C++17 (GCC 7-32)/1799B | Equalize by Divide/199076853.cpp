#include<bits/stdc++.h>
using namespace std ;
 
#define ff first 
#define ss second 
 
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
    int n ;
    cin >> n ;
    
    vector<pair<int,int>> v(n) ;
    
    for(int i =0 ;i<n ;i++)
    {
      int x ;
      cin >>x  ;
      v[i] = {x,i+1} ;
      
    }
    
    
    sort(v.begin(),v.end()) ;
    
    if(v[0].ff==v[n-1].ff) cout <<0 << endl ;
    else if(v[0].ff==1) cout << -1 << endl ;
    else
    {
      vector<pair<int,int>> in ;
      
      while(v[0].ff!=v[n-1].ff)
      {
          
       
        while(v[n-1].ff>v[0].ff)
        {
          in.push_back({v[n-1].ss,v[0].ss}) ;
          
          double  r = (double)v[n-1].ff/(double)v[0].ff ;
          v[n-1].ff= ceil(r) ;
           sort(v.begin(),v.end()) ;
        }
    
        
        
      }
      
      cout << in.size() << endl ;
      
      for(auto it : in)
      {
        cout << it.ff << " " << it.ss << endl ;
      }
      
      
      
    }
    
    
    
  }
  
  
}