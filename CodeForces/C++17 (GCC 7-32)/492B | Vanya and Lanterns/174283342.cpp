#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
   int n , l ;
   cin >> n >> l ;
 
   int a[n] ;
 
   for(int i =0 ;i<n ;i++)
   {
    cin >> a[i] ;
   }
   sort(a,a+n) ;
 
   int max =0 ;
 
   for(int i =1 ;i<n ;i++)
   {
    if((a[i]-a[i-1])>max) max = a[i]-a[i-1] ; 
   }
   int x=0 ,y=0 ,z ;
 
 
   if(a[0]!=0) 
   {
    x= a[0]-0 ;
   }
   else x=0 ;
   if(a[n-1]!=l)
   {
    y= l-a[n-1] ;
   }
   else y=0 ;
 
   if(x>y) z= x ;
   else z=y ;
 
   if(max<2*z) { max= z ;
   printf("%.6f\n",(max*1.000000) ); ; }
   else{
 
   printf("%.6f\n",(max*1.000000)/2 );
}
 
 
 
 
 
}