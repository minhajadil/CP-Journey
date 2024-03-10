#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
 
  int t ;
  cin >> t ;
 
  while(t--)
  {
  string x = "codeforces" ;
  char a ;
  cin >> a ;
  int  f=0 ;
 
  for(int i =0 ;i<10 ;i++)
  {
    if(x[i]==a) 
    {
      f=1 ;
      break ;
    }
  }
 
  if(f==1) cout << "yes" << endl ;
  else cout << "no" << endl ;
}
}