#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int r , c ;
        cin >> r >> c ;
 
        long long sum=0 ;
 
        for(int i =1 ;i<=c ;i++)
        {
            sum+=i ;
        }
 
        for(int i = 2 ;i<=r ;i++)
        {
            sum+=i*c ;
        }
        cout << sum << endl ;
 
 
 
 
    }
 
 
 
}