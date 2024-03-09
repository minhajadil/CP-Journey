#include<bits/stdc++.h>
using namespace std ;




int main()
{
  string a ;
  cin >> a ;
  int s = a.size() ;
  for(int i =0 ;i<s ;i++)
  {
    a[i]=toupper(a[i]) ;
  }
  cout << a << endl ;
}