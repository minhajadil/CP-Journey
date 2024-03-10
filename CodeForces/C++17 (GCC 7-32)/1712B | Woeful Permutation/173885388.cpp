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
 
    if(n==1) cout << 1 << endl ;
    else if(n==2) cout << "2 1" << endl ;
    else if(n==3) cout << "1 3 2" << endl ;
    else {
        int a[n] ;
        int j=1 ;
        for(int i =0 ;i<n ;i++)
        {
            a[i]=j ;
            j++ ;
        }
 
        if(n%2==0)
        {
            for(int i =0 ;i<n-1 ;i+=2)
            {
                swap(a[i],a[i+1]) ;
            }
 
            for(int i =0 ;i<n ;i++)
            {
                cout << a[i] << " " ;
            }
            cout << endl ;
        }
        else {
            for(int i =1 ;i<n-1 ;i+=2)
            {
                swap(a[i],a[i+1]) ;
            }
 
            for(int i =0 ;i<n ;i++)
            {
                cout << a[i] << " " ;
            }
            cout << endl ;
 
        }
 
 
    }
 
 
    }
}