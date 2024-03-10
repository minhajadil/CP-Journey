#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int x , y ;
        cin >> x >> y ;
        int r = x+y ;
        string str ;
        str.empty() ;
 
        int f=0 ;
 
        for(int i=0 ;i<r ;i++ )
        {
            if(x>0 && f==0) {str+='0' ; x-- ;
             f=1 ; }
            else if(y>0 ) { str+='1' ;
                f=0 ;
                y-- ; }
 
        }
       
if(x>y) { 
    for(int i =0 ;i<x-y ;i++)
    {
        cout << '0' ;
    }
 
        cout << str << endl ;
    }
    else cout << str << endl ;
 
 
 
 
}
}