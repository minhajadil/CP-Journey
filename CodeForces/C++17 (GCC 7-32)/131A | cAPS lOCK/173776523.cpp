#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    string a,b ;
    cin >> a ;
 
    int sz = a.size() ;
    int cnt =0 ;
    bool r =0 ;
    if(islower(a[0])) r =1 ;
 
    for(int i =0 ;i<sz ;i++)
    {
        if(isupper(a[i])) cnt++ ;
    }
    if(cnt==sz || (cnt==sz-1 && r==1))
    {   
        for(int i =0 ;i<sz ;i++)
        {
            if(isupper(a[i])) b+=tolower(a[i]) ;
            else if(islower(a[i])) b+=toupper(a[i]) ;
 
        }
        cout <<b << endl ;
    }  
    else cout << a << endl ;
    
 
}