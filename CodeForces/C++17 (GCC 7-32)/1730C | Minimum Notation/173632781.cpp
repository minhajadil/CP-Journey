#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
       string a ;
       cin >> a ;
 
       int sz = a.size() ;
       char mini = '9' ;
       
 
       for(int i = sz-1 ;i>=0 ;i--)
       {
        mini = min(a[i],mini) ;
        if(a[i]!='9' && a[i]>mini) a[i]++ ;
 
        
        }
       sort(a.begin(),a.end()) ;
       cout << a << endl ;
 
 
 
    }
}