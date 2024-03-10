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
 
        if(n%2==0) cout << n/2 << " " << n/2 << endl ;
        else
        {     
        int x = n/2 ;
        int y= n-x ;       
 
            int suf_9 = 0 ; // we will just have to split consecutive suffix 9 between to numbers 
            // cz these 9 will cause another number's digit to 0  1999+1 = 2000 
 
 
            while(x%10==9)
            {
                x/=10 ;
                y/=10 ;
                suf_9++ ;
            }
 
            while(suf_9--)
            {
                x=x*10+5 ;
                y= y*10+4 ;
                swap(x,y) ;
            }
 
            cout << x << " " << y << endl ;
 
 
 
 
 
 
        } 
    }
}