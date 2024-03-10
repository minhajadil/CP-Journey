#include<bits/stdc++.h>
using namespace std ;
 
int main()
{   
 int n ;
 cin >> n ;
 int s ;
 cin >> s ;
    cin >> ws ;
 char c[n] ;
 
 gets(c) ;
 
 
 
 for(int i= 1 ; i<=s ;i++)
 {  
  for(int k=0 ;k<n-1 ;k+=1)
  {
   if(c[k]=='B' && c[k+1]=='G') 
   {
    c[k]='G' ;
    c[k+1]='B' ;
    k++ ;
   }
  }
}
cout << c << endl ;
 
 
 
 
 
 
}