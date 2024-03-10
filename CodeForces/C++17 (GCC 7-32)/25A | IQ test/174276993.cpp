#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    int a[t] ;
    int e =0 ;
    int o=0 ;
    for(int i =0 ;i<t ;i++)
        {
            cin >> a[i] ;
            if(a[i]%2==0) e++ ;
            else o++ ;  
        }
    int checkforeven ;
    if(e>1) checkforeven=1 ;
    else checkforeven=0 ;
 
    for(int i =0 ;i<t ;i++)
    {
        if(checkforeven==1 && a[i]%2!=0) {
            checkforeven= i+1 ;
            break ;
        }
        else if(checkforeven==0 && a[i]%2==0)
        { checkforeven=i+1 ; break ; 
        }
    }
 
    cout << checkforeven << endl ;
 
 
 
 
 
 
}