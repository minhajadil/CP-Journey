#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int a , b ;
    cin >> a >> b ;
    a= abs(a) ;
    b= abs(b) ;
 
    if(a==0 || b==0) {
       int r = a+b ;
       cout << r+ r-1 << endl ;
    }
    else if(a>b)
    {
      cout << (a+b)+(a-b-1) << endl ;
    }
    else if(a<b)
    {
      cout << (a+b)+(b-a-1) << endl ;
    }
    else if(a==b) cout << a+b << endl ;
  }
}