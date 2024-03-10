#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    ios_base::sync_with_stdio(0) ;
    cin.tie(0) ; cout.tie(0) ;
    
    
   int n ,q ;
   cin >> n >> q ;
   cin.ignore() ;
   long a[n+1] ;
   a[0]= 0 ;
   string si ;
   cin >> si ;
   int s ;
   for(int i=1 ;i<=n;i++)
   {
    s= si[i-1]-'a' +1 ;
    
    a[i] = a[i-1] +s ;
    
    
       
   }
   int l ,r ;
  
   while(q--)
   {cin >> l >> r ;
       cout << a[r] -a[l-1] << endl ;  
   }
   
    
    return 0 ;
    
    
    
    
}