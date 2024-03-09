#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n ;
    cin >> n ;
    int a[n] ;
    map<int,int> m ;


    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        m[a[i]]++ ;
    }
    long long sum =0 ;

    for(auto it : m )
    {
        if(it.second>it.first) sum+=it.second - it.first ;
        else if(it.second<it.first) sum+=it.second ;
    }
    cout << sum << endl ;




}