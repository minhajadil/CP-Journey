#include<bits/stdc++.h>
using namespace std ;
 
int main()
{ 
    int t ;
    cin >> t ;
    while(t--)
    {
    
    int a ;
    cin >> a ;
    int b[a] ;
    int j=0 ;
    for(int i =1 ;i<=a ;i++) {
      
        b[j]=i ;
        j++ ;
        if(j>=a) break ;
    }
    int f ,f1 ;
    
    for(int k=0;k<a-1 ;k+=2)
    {
       
       swap(b[k],b[k+1]) ;
      
    }
     if(a%2!=0) { swap(b[a-1],b[a-2]) ; } 
    for(int r=0 ;r<a ;r++)
    {
        cout << b[r] << " " ;
    }
    cout << endl ;
    
    }
    
}