// Problem: B. T-primes
// Contest: Codeforces - Codeforces Round #142 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
bool marked[1000000+10] ;
 
void sieve(int n)
{
 marked[1]= true ;
 marked[0] = true ;
 
 for(int i =2 ;i*i<=n ;i++)
 {
  if(marked[i]==false) 
  {
   for(int j = i*i ;j<=n ;j+=i)
   {
    marked[j]=true ;
   }
  }
  
 }
  
}
 
 
 
 
int main()
{
 sieve(1000000+10) ;
 int t ;
 cin >> t ;
 
 while(t--)
 {
  long long n ;
  cin >> n ;
  long long sq = sqrt(n) ;
  //cout << sq << endl ;
  
  if(marked[sq]==false && n==(sq*sq)) cout << "YES" << endl ;
  else cout << "NO" << endl ;
  
 }
 
 
}