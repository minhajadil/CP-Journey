#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int a[4] ;
 
    int max =0 ;
    int mxin ;
    
    for(int i =0 ;i<4 ;i++)
    {
        cin >> a[i] ;
        if(max<a[i]) { max=a[i] ;
            mxin=i ;} 
    }
    int r =a[mxin]-a[0] ;
    int b = a[mxin]-a[1] ;
    int c =a[mxin]-a[2] ;
    int d = a[mxin]-a[3] ;
 
    if(r!=0) cout << r << endl ;
     if(b!=0) cout << b << endl ;
      if(c!=0) cout << c << endl ;
       if(d!=0) cout << d << endl ;
 
 
 
 
 
 
 
 
   
        
        
 
 
 
 
 
 
}