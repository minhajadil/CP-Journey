// Problem: B. Prefix Removals
// Contest: Codeforces - Codeforces Round #778 (Div. 1 + Div. 2, based on Technocup 2022 Final Round)
// URL: https://codeforces.com/problemset/problem/1654/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
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
    map<char, int > m ;
 
   for(int i=0 ;i<a.size() ;i++)
   {
      m[a[i]]++ ;
   }
   int ind =0 ;
 
   for(int i =0 ;i<a.size() ;i++)
   {
    if(m[a[i]]>1) {
        m[a[i]]-- ;
        ind++ ;
    } 
    else break ;
 
   }
 
   for(int i =ind ;i<a.size() ;i++)
   {
    cout << a[i] ;
   }
   cout << endl ;
 
     
     
 
 
  }
 
 
 
 
 
}