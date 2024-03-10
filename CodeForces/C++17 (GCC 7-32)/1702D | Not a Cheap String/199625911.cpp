#include<bits/stdc++.h>
using namespace std ;
 
    #define ff first
    #define ss second
    
  
 
int main()
{
  int t ;
  cin >> t ;
 
  map<char,int> m ;
 
    char x ='a' ;
 
    for(int i =0 ; i<26 ;i++)
    {
      m[x+i] = i+1 ;
    }
 
 
  while(t--)
  {
    string a ;
    cin >> a ;
    int p ;
    cin >> p ;
    int sz = a.size() ;
 
    priority_queue <pair<int,int>> q ;
    unordered_set<int> s ;
 
 
    long long total = 0 ;
 
    
   for(int i = 0 ;i<sz ;i++)
    { 
      
      total+=m[a[i]] ;
      q.push({m[a[i]],i}) ;
    }
 
 
 
    while(total>p)
    {
      int x  = q.top().ff ;
      int i = q.top().ss ;
      total-=x ;
     s.insert(i) ;
      q.pop() ;
    }
 
 
    for(int i =0 ;i<sz ;i++)
    {
      if(s.count(i)==0) cout <<a[i] ;
    }
    cout << endl ;
 
 
 
 
 
 
  
 
 
 
 
  }
}