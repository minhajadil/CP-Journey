#include<bits/stdc++.h>
using namespace std ;
const int  N = 1e6 ;
long long sum[N+10] ;
 
 
int main()
{
    int n , q ;
    cin >> n >>q ;
    int a[n] ;
    for (int i = 0; i < n; ++i)
    {
      cin>> a[i] ;
      
    }
    sort(a,a+n) ;
    
    for(int i =1 ;i<=n ;i++)
        {
            sum[i]=sum[i-1] + a[i-1] ;
           //cout << sum[i] << endl ;
        }
 
   
     
    while(q--)
    {
        int x , y ;
        cin >> x >> y ;
       int r = (n-x)+y ;
 
        cout << sum[r]-sum[n-x] << endl ;
}
 
 
 
 
}