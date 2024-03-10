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
        int a[n] ;
        int b[n] ;
 
        for(int i =0 ;i<n ;i++)
        {
            cin >> a[i] ;
 
        }
 
        for(int i =0 ;i<n ;i++)
        {
            cin >> b[i] ;
        }
 
 
        for (int i = 0; i < n; ++i)
        {
            if(a[i]<b[i]) 
            {
                int j = a[i] ;
                a[i]= b[i] ;
                b[i]=j ;
            }
        }
        int maxa= -1 ;
        int maxb =-1 ;
 
        for(int i =0 ;i<n ;i++)
        {
            if(a[i]>maxa) maxa= a[i] ;
            if(b[i]>maxb) maxb= b[i] ;
        }
      //  cout << maxa << " " << maxb << endl ;
        cout << maxa*maxb << endl ;
 
 
 
    }
    
 
}