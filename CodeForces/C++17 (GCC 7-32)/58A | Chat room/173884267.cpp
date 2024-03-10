#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    string a ;
    cin >> a ;
 
    string b = "hello" ;
    int cnt =0 ;
    int r=0 ;
    int sz = a.size() ;
 
    for(int i =0; i<sz ;i++)
    {   
        if(a[i]==b[r])
        {
            cnt++ ;
            r++ ;
            if(r==5) break ;
        }
      
 
 
    }
 
 
      
 
        if(r==5) cout << "YES" << endl ;
        else cout << "NO" << endl ;
}