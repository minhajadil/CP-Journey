#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int a ;
 cin >> a ;
 string b ;
 cin >> b ;
 
 string newi ="" ;
 
 for(int i =0 ;i<a ;i++)
 {
  if(isupper(b[i]))
   {
    newi+=tolower(b[i]) ;
   }
   else newi+=b[i] ;
 }
 
 sort(newi.begin(),newi.end()) ;
 
     unique(newi.begin(),newi.end()) ;
     int sum = 0 ;
 
     for(int k = 0 ;k<26;k++)
     {
      sum+=int(newi[k]) ;
 
     }
 
     if(sum==2847) cout << "YES" << endl ;
     else cout << "NO" << endl ;
 
 
 
 
 
 
}