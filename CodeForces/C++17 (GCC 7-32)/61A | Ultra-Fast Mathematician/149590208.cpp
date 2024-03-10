#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
 string a ;
 cin >> a ;
 string b ;
 cin >> b ;
 int size = a.size() ;
 string empty ;
 
    for(int i =0 ; i<size ;i++)
    {
       if(a[i]==b[i]) empty+='0' ;
       else empty+='1' ;
 
 
    }
cout << empty << endl ;
 
 
 
 
 
}