#include<iostream>
#include<map>

using namespace std ;


int main()
{
   int n ;
   cin >> n ;
   map<int , int > number ;
   int t ;
   for(int i =0 ;i<n ;i++)
   {
       cin >> t ;
       number[t]++ ;
   }
   int m=0  ;
   for(auto u : number )
   {
       if(u.second > u.first) m+=u.second - u.first ;
       else if(u.second<u.first) m+= u.second ;
       else m+=0 ;
       
       
   }
   cout << m << endl ;
   
    
    
    
    
}