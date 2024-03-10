#include<bits/stdc++.h>
using namespace std ;
 
#define first ff ;
#define second ss ;
 
int main()
 
{
  int n ;
 
  cin >> n ;
 
  unordered_map<int,int> f ;
  unordered_map<int,int> s ;
  int away[n] ;
 
  for(int i = 0 ;i<n ;i++)
  {
    int x ,y ;
    cin >> x >>y ;
    away[i]=y ;
    f[x]++ ;
    s[y]++ ;
  }
 
  long long h = (n-1) ;
  long long a = 0 ;
 
 
  for(int i =0 ;i<n ;i++)
  {
    int m = (n-1)-(f[away[i]]) ;
    cout << h+(n-1-m) << " " << m << endl ;
  }
 
 
 
 
}