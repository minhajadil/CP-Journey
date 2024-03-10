#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
 
 
{
 
    string a; 
    getline(cin , a) ;
    int sz = a.size() ;
    map<char , int > l ;
    char r ;
 
    for(int i =0 ;i<sz ;i++)
    {   
        if(a[i]!='{' && a[i]!='}' &&a[i]!=',' && a[i]!=' '  ) { r=a[i] ;
           l[r]++ ; }
 
    }
 
    int cnt=0 ;
 
    for(auto it : l)
    {
        cnt++ ;
    }
 
    cout << cnt << endl ;
 
 
 
 
 
}