// Problem: A. Almost Prime
// Contest: Codeforces - Codeforces Beta Round #26 (Codeforces format)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
const int N = 1e6 ;
 
bool a[N] ;
 
void sieve(int n)
{
 a[0]=1 ;
 a[1]=1 ;
 
 for(int i =2 ;i*i<=n ;i++)
 {
  if(a[i]==false)
  {
  for(int j=i+i ;j<=n ;j+=i)
  {
   a[j]=true ;
   
  }
  }
 }
 
 
}
 
 
 
 
 
 
int main()
{
 int n ;
 cin >> n ;
 sieve(n+1) ;
 //cout << a[2] << endl ;
 int cnt =0 ;
 
 
 for(int i =1 ;i<=n ;i++)
 {set<int>s ;
  for(int j =1 ;j<=i ;j++)
  {
   if(i%j==0 && a[j]==false) s.insert(j) ;
  }
  //cout << s.size() << endl ;
  if(s.size()==2) cnt++ ;
 }
 
 cout << cnt << endl ;
 
 
 
 
 
}