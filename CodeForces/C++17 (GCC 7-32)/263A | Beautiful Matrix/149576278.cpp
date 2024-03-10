#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
 
 
 
{
 int a[6][6] ;
 int k , r ;
 
 for(int i =1 ;i<6 ;i++ )
 {
 
  for(int j =1 ;j<6;j++)
  {
   cin>>a[i][j] ;
   if(a[i][j]==1) {
    k=i ;
    r=j ;
   }
  }
 }
int move = abs(3-k) + abs(3-r) ;
cout << move << endl ;
 
 
 
 
 
 
 
}