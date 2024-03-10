#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
 
int main()
{
  int n ; cin >> n ;
 
  for(int i =n+1 ;i<=9876 ;i++)
  {
   unordered_map<int,int> mp ;
 
    int x = i ;
 
    while(x!=0)
    {
      mp[x%10]++ ;
      x/=10 ;
    }
    
    if(mp.size()==4)
    {
      cout << i << endl ;
      return 0 ;
    }
 
  }
 
 
 
  
 
 
}