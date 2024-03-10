// In the name of ALLAH <3
 
 
#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
   int n ;
   cin >> n ;
   map<long int , int > a ;
   int k ;
  int  max=0 ;
   for(int i =0 ;i<n ;i++ )
   {cin >> k ;
   a[k]++ ;
       
   }
   
   for(auto r : a)  
   {
       if(r.second > max) max= r.second ;
   }
   
   cout << max << endl ;
   
   
   
    
    
    
    
    
    
}