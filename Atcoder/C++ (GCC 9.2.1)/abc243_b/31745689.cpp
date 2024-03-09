#include<bits/stdc++.h>
using namespace std ;



int main()


{
    long long int a ;
    cin >> a ;
    int sum =0 ;
    long long int tmp = a ;
    int rem ;
    

    while(tmp!=0)
    {
        rem= tmp%10 ;
        sum+=rem ;
        tmp=tmp/10 ;
    }

    if(sum==45) cout << 0 << endl ;
    else cout << 45-sum << endl ;




}