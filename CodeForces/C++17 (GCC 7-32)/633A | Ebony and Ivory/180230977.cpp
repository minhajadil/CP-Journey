// Problem: A. Ebony and Ivory
// Contest: Codeforces - Manthan, Codefest 16
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 
  int a , b , c;
  cin >> a >>b >> c ;
  int r=0 ;
  
  for(int i =0 ;i<=c ;i++)
  {
   for(int j =0 ;j<=c ;j++)
   {
    if((a*i + b*j)==c) 
    {
     r=1 ;
     break ;
     
     
    }
   }
  }
  if(r==1) cout << "YES" << endl ;
  else cout << "NO" << endl ;
 
 
 
}