#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
 
 
    int n ;
    cin >> n ;
    int f= n/3 , s = n/3 , t= n/3 ;
 
    if(n%3!=0)
    {
        int r = n%3 ;
        if(r==2) 
            {s+=1 ;
             f+=1 ;}
        else { f+=1 ; } 
 
        f+=1 ;
        t-=1 ;    
    }
    else  {
        f+=1 ;
        t-=1 ;
    }
    cout << s <<" " << f << " " << t << endl ; 
    
    }
}