#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    string a ;
    cin >> a ;
    int ind =-1 ;
   // int max =-1 ;
    int xx = a[a.size()-1]-48 ;
    int f =0 ;
 
    for(int i =a.size()-1 ;i>=0;i--)
    {
        int r = a[i]-48 ;
        if(r%2==0)
        {   if(f==0)
            {
                ind = i ;
                f=1 ;
            }
           if(r<xx) 
           {
            ind = i ;
 
           }
        }
    }
 
    if(ind!=-1) {swap(a[a.size()-1],a[ind]) ;
        cout << a << endl ; }
    else cout << -1 << endl ;
}