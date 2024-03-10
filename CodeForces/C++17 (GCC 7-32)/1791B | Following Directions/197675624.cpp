#include<bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
 
    string a ;
    cin >> a ;
    int x=0 , y =0 ;
    int f=0 ;
 
    for(int i =0 ;i<n ;i++)
    {
      if(a[i]=='U') y++ ;
      else if(a[i]=='D') y-- ;
      else if(a[i]=='R') x++ ;
      else if (a[i]=='L') x-- ;
      if(x==1 && y==1)
      {
        f =1 ;
        break ;
      }
    }
 
    if(f==1) cout << "yes" << endl ;
    else cout << "no" << endl ;
 
  }
 
  
}