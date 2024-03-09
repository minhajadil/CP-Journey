#include<bits/stdc++.h>
using namespace std  ;

using ll = long long ;

ll binexp(ll a , ll b)
{

   ll ans =1 ;

   while(b!=0)
   {
    if(b&1) ans = (ans* a);
    b>>=1 ;
    a=(a*a) ;
   }
   return ans ;

}

int main()
{
  ll a , b , c ; cin >> a >> b >> c ;

  if(binexp(a,2)+binexp(b,2)<binexp(c,2)) cout <<"Yes" << endl ;
  else cout << "No" << endl ;
}