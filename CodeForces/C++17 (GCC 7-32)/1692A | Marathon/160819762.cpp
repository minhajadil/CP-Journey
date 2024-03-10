#include<bits/stdc++.h>
using namespace std ;
 
bool cmp(int a ,int b)
{
    return (a>b) ;
}
 
 
 
int main()
{
    int t; cin >> t ;
    while(t--)
    {
        int a[4] ;
        for(int i =0 ;i<4 ;i++)
        {
            cin >> a[i] ;
        }
        int r = a[0] ;
        sort(a,a+4,cmp) ;
 
        // for (int i = 0; i < 4; ++i)
        // {
        //     /* code */ cout << a[i] << endl ;
        // }
        int cnt=0 ;
         for(int i =0 ;i<4 ;i++)
        {     
            if(a[i]==r) break ;
            else cnt++ ;
        }
        
 
 
        cout << cnt  << endl ;
 
 
    }
 
 
 
}