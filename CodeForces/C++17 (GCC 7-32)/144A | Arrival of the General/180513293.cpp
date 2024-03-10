#include<iostream>
using namespace std ;
 
 
 
int main()
{
 int n ;
 cin >>n ;
 int a[n] ;
 int min = INT_MAX ;
 int max =-1 ;
 
 for(int i =0 ; i<n ;i++)
 {
  cin >> a[i] ;  
  if(max< a[i]) {
   max = a[i];
  }
   if(min>a[i])
  {
   min=a[i]; 
  }
 }
 int mini =0 ;
 int maxi=0 ;
 
 
 for(int i =0 ; i<n ;i++)
 {
  if(min==a[i])
  {
   mini=i ;
  }
 }
 
 for(int i= 0 ; i<n ;i++)
 {
  if(max==a[i])
  {
   maxi =i ;
   break ;
  }
 }
 if(maxi>mini) cout << (n-mini) + ((maxi-0)-2) <<endl;
 else cout <<  ((n-mini) + ((maxi-0)-1)) <<endl ;
 
}