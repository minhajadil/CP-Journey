#include<bits/stdc++.h>
using namespace std ;



int main()
{
   string a ; cin >> a ;
  
  int l =4- a.size() ;
  string ans ="" ;
  
  for(int i =0 ;i<l ;i++)
  {
    ans+='0' ;
  }
  ans+=a ;
  
  cout << ans << endl ;
  
  
}