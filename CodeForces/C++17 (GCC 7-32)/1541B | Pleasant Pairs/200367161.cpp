#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  ll n ;
  cin >> n ;
 
  ll a[n] ;
  for(int i =1 ;i<=n ;i++)
  {
    cin >> a[i] ;
  }
 
  // traversing the values of a[i] and 
  // getting the possible value of i 
  ll cnt =0 ;
 
  for(int i =1 ;i<=n ;i++)
  { 
    for(ll p = a[i] ;p<=2*n ;p+=a[i])
    { // traversing the values of p from a[i] *1 to a[i]* k where a[i]*k<=2n
      // because a[i]*a[j]=i+j , i+j<=2n so a[i]*a[j]<=2n
 
      ll j = p- i ; // getting all the possible of j from the eq a[i]*a[j]=i+j 
 
      if(j!=i && j>i && j<=n && a[i]*a[j]==i+j) cnt++ ; 
 
    }
  }
 
  cout << cnt << endl ;
 
 
 
  }
}