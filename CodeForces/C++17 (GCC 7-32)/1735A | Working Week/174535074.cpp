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
 
    n=n-3 ; // cause 3 days have already taken as holiday 
    n/=3 ;  // dividing left days equally 
 
    cout << n-1 << endl ; // segment for 21 : (21-3)/3 =6 : 1 6 14 --> 1 8 12 XX cz 12-8=4 
 
     
 
    }
}