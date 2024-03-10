#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
    int n ,m ;
    cin >> n >> m ;
    int a[n] ;
 
    for(int i=0 ;i<n ;i++)
    {
        cin >> a[i] ;
        
    }
    int j=-1 ;
    for(int i =0 ;i<n ;i++)
    {   
        if(a[i]>m) {
            j=i ;
            break ;
        }
        else m-=a[i] ;
    }
    
    if(j==-1) {
        cout << 0<< endl ;
    }
    else {
 
   int  sum = a[j]-m ; ;
    
    for(int i =j+1 ;i<n ;i++)
    {
        sum+=a[i] ;
    }
      cout << sum << endl ;
}
 
}
 
}