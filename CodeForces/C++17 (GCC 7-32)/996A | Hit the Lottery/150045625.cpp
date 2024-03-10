#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int a  ;
 cin >> a ;
 int rem=a;
 int quotient=0 ;
 
 
 while(rem!=0)
 {
  if(rem>=100) {
   quotient+=rem/100 ;
   rem = rem%100 ;
  
  }
  else if(rem>=20) {
   quotient+=rem/20 ;
   rem = rem%20 ;
 
  }
  else if(rem>=10)
  {
   quotient+=rem/10 ;
   rem=rem%10 ;
  }
  else if(rem>=5) {
   quotient+=rem/5 ;
   rem = rem%5 ;
  
  }
  else{ quotient+=rem/1 ; 
   rem=rem%1 ;
     }
 
 }
 
cout<< quotient << endl ;
 
 
 
}