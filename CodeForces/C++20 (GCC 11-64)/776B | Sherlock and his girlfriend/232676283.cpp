#include<bits/stdc++.h>
using namespace std ;
 
const int N =1e5+5 ;
 
 
bitset<N>not_prime ;
 
 
void sieve()
{
  not_prime[1] = true ;
  for(int i =2 ;i*i<=N ;i++)
  {
    if(!not_prime[i])
    {
      for(int j = i*i ;j<N ;j+=i)
      {
        not_prime[j]= true ;
      }
    }
  }
}
 
 
 
 
int main()
{
  sieve() ;
 int n ; cin >> n ;
 
 if(n>2)cout << 2 << endl ;
 else cout << 1 << endl ;
 
 for(int i =2 ;i<=n+1;i++)
 {
  if(!not_prime[i]) cout << 1 << " " ;
  else cout << 2 << " " ;
 }
 cout << endl ;
 
}