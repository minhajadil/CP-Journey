// Problem: B. Decode String
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int t ;
 cin >> t ;
 map<int,char> al ;
 
 for(int i = 1 ;i<=26 ;i++)
 {
  al[i] = 'a'+i-1 ;
 }
 
 // for(auto it : al)
 // {
  // cout << it.first << " " <<it.second << endl ;
 // }
 
 while(t--)
 {
  int n ;
  cin >> n ;
  
  string  a ;
  cin >> a ;
  vector<int> v ;
  
  int f ;
  
  for(int i =n-1 ;i>=0 ;i--)
  {
   if(a[i]=='0')
   {  string x ;
    x+=a[i-2]  ;
    
    x+=a[i-1] ;
    i-=2 ;
    //cout << x << endl ;
    f = stoi (x) ; 
    v.push_back(f) ;
    
   }
   else 
   {
    //f= stoi (a[i]) ;
    v.push_back(a[i]-'0') ;
   }
  }
  
  reverse(v.begin(),v.end()) ;
  
  for(auto it :v)
  {
   cout << al[it] ;
  }
  cout << endl ;
  
  
  
 }
 
 
}