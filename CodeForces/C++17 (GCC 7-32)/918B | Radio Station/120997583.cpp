// In the name of ALLAH <3
 
 
#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int a , b ;
    cin >> a >> b  ;
    
    map<string , string > ip ;
    
    for(int i= 1 ;i<=a ;i++)
    {
        string web ;
        cin >> web ;
        string ip1 ;
        cin >> ip1 ;
        ip[ip1] = web ;
    }
    for(int k = 1 ;k<=b ;k++)
    {
        string q ;
        cin >> q ;
        string i ;
        cin >> i ;
        int s = i.size() ;
        i.erase(s-1) ;
       
        cout << q << " " << i << "; " << "#" << ip[i] << endl ;
        
        
        
        
    }
    
    
    
    
    
    
}