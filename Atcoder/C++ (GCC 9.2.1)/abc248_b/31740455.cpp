#include<bits/stdc++.h>
using namespace std ;



int main()


{

    long long int a , b , k ;
    cin >> a >> b >> k ;
    int cnt = 0 ;

    if(a==b) cout << 0 << endl ;
    else {
        while(a<b)
        {
            
            a=a*k ;
            cnt++ ;

        }
        cout << cnt << endl ;
    }












}