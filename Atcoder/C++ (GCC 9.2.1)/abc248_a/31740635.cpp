#include<bits/stdc++.h>
using namespace std ;



int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    int b[n] ;
    int same =0 ;
    int notsame =0 ;

    for(int i =0 ;i<n ;i++)
    {
        cin >>a[i] ;
    }
    for(int i =0 ;i<n ;i++)
    {
        cin >> b[i] ;
    }

    for(int i =0 ;i<n ;i++)
    {
        if(a[i]==b[i]) same++ ;

    }

    for(int i =0 ;i<n ;i++)
    {
        for(int j =0 ;j<n ;j++)
        {
            if(i!=j && a[i]==b[j]) notsame++ ;
        }
    }
cout << same << endl ;
cout << notsame << endl ;






}

    
