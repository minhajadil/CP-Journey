// One day I'm gonna change for myself <3
 
 
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
    int even =0 ;
    vector<int> odd ;
 
    for(int i =0 ;i<n ;i++)
    {   cin >> a[i] ;
        if(a[i]%2==0) even++ ;
        if(a[i]%2!=0) odd.push_back(a[i]) ;
    } 
 
    long long total = (even*(even-1))/2 ;
 
 
    int sz = odd.size() ;
    total+=(even*sz) ;
 
    for(int i =0 ;i<sz ;i++)
    {
        for(int j =i+1 ;j<sz ;j++)
        {
            if(__gcd(odd[i],2*odd[j])>1) total++ ;
 
        }
    }  
    cout << total << endl ;
 
 
 
 
 
    }
}