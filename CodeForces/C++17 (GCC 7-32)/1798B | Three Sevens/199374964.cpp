#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int m ;
    cin >> m ;
    vector<int> d[m] ;
    unordered_map<int,int>l ;
    unordered_map<int,int> last ;
    set<int> s ;
 
    for(int i= 0 ;i<m ;i++)
    {
      int n ;
      cin >> n ;
      for(int j =0 ;j<n ;j++)
      {
        int x ;
        cin >> x ;
        d[i].push_back(x) ;
        l[x]++ ;
        last[x]= i ;
        s.insert(x) ;
      }
    }
      int k =0 ;
 
 
      int cnt =0 ;
      int h =1 ;
      vector<int> v ;
        
        for(int i =0 ;i<m ;i++)
        { k = 0 ;
          for(int it : d[i])
          {
 
            if(last[it]==i) 
              {
                v.push_back(it) ;
                k=1 ;
                break ;
              }
             
              
          }
           if(k!=1) 
              {
                h =0 ;break ;
              }
          
        }
      
 
        if(h==0) cout << -1 << endl ;
        else 
        {
          for(auto it : v)
            {cout << it << " " ;}
          cout << endl ;
        }
 
 
 
     
 
  
 
 
  }
}