#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  long long  r , x, y , p ,q ;
  cin >> r >> x >> y >> p >> q ;
 
  double d = sqrt((((p-x)*(p-x))+((q-y)*(q-y)))) ;
 
 
  cout << ceil(d/(2*r)) << endl ;
 
 
}