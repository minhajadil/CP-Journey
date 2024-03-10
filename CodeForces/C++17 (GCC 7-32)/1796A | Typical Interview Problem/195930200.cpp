#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
  string b = "FBFFBFFBFBFFBFFBFBFFBFFBFB" ;
 
 
 
  while(t--)
  {
    int n ;
    cin >> n ;
    string a ;
    cin >> a ;
    auto it = b.find(a) ;
 //   cout << it << endl;
    if(it!=string::npos) cout << "YES" << endl ;
    else cout << "NO" << endl ;
  }
}