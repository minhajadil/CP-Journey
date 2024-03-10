#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    
 
    long long n ;
    cin >> n ;
 
    if(n%2!=0 || n<4) cout << -1 << endl ;
    else 
    {
        long long min =n/6 ; // making cars with 6 tires as much as possible to minimize the car number 
        if(n%6!=0) min++ ;
 
        long long max = n/4 ; // making cars with 4 tires as much as possible to maximize the car number  
 
        cout << min << " " << max << endl ;
 
 
 
    }
 
 
 
 
 
 
 
    }
 
 
 
    }