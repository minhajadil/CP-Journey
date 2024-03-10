#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
 
 
{
    int n ,m ;
    cin >> n >> m ;
    int r =0 ;
 
    for(int i =1 ;i<=n ;i++)
    {
        
        if(i%2==0 && r==0)
        {
            for(int k=1 ;k<=m-1 ;k++) {
                cout << '.' ;
            }
            cout <<'#' << endl ;
            r=1 ;
    
        }
     else  if(i%2==0 && r==1) 
        { 
            cout <<'#' ;
            for(int k=1 ;k<=m-1 ;k++) {
                cout << '.' ;
            }
            cout << endl ;
            r=0 ;
        }
        else if(i%2!=0) {
            for(int k=1 ;k<=m ; k++ )
            {
                cout << '#' ;
            }
            cout << endl ;
        }
 
 
    }
 
 
 
 
 
}