#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
 
  string s ;
  cin >> s ;
  int cnt=0 ;
 
  while(s.size()!=1)
  {
 
    int sum =0 ;
  for(int i =0 ;i<s.size() ;i++)
  {
    sum+=s[i]-'0' ; 
  }
  s.clear() ;
 
  while(sum!=0)
  {
    int rem= sum%10 ;
    sum/=10 ;
    s+=rem+'0' ;
  }
  cnt++ ;
}
 
cout << cnt << endl ;
 
 
 
}