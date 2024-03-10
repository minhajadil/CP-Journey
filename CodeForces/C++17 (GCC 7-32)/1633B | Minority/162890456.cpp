#include<bits/stdc++.h>
using namespace std ;
 
const int N = 0 ;
 
int main()
{
  int t; 
  cin >> t ;
 
  while(t--)
  { 
    string a ;
    cin >> a ;
    int sz = a.size() ;
    int c1 =0 ;
    int c0 =0 ;
 
    for(int i =0 ;i<sz ;i++)
    {
        if(a[i]=='0') c0++ ;
        if(a[i]== '1') c1++ ;
    } 
    if(c0!=c1) {
        if(c0>c1) cout << c1 << endl  ;
        else cout << c0 << endl  ;
    } 
    else cout << c0-1 << endl ;
 
 
     
 
 
  }
 
 
 
 
 
}