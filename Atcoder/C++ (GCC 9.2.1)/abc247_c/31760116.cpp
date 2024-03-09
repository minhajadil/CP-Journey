#include<bits/stdc++.h>
using namespace std ;



int main()
{
    int n ;
    cin >> n ;

    string a[n+1] ;

    a[1]= '1' ;

    for(int i =2 ;i<=n ;i++)
    {
        a[i] = a[i-1] +' ' + to_string(i) + ' ' + a[i-1] ;
    }

    cout << a[n] << endl ;




}