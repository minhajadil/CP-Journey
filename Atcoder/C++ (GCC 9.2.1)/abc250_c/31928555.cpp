#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n , q ;
    cin >> n >> q ;
    int a[n+1] ;
    int pos[n+1] ;
    int qu[q] ;

   

    for(int i =0 ;i<q ;i++)
    {
        cin >> qu[i] ;
    }
     for(int i = 1; i<=n ;i++)
    {
        a[i] = i ;
        pos[i] = i ;
    }

    for(int i = 0 ;i<q ;i++)
    {
        int pi = pos[qu[i]] ;
        int pin = pi ;
        if(pi!=n) pin++ ;
        else pin-- ;

        int val1 = a[pi] ;
        int val2 = a[pin] ;

        swap(a[pi],a[pin]) ;
        swap(pos[val1],pos[val2]) ;

}


for(int i =1 ;i<=n ;i++)
{
    cout << a[i] << " " ;
}

cout << endl ;

}