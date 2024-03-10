#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
 
        int n  ;
        cin >> n ;
 
        int start=(n*n) ; 
        int later= 1 ;
 
        vector<vector<int>> v(n,vector<int> (n) ) ;   // the outer vector size is n , and the inner vector<int> size is n
        int f=0 ; 
 
        for(int i =0 ;i<n ;i++)
        {
            for(int j =0 ;j<n ;j++)
            {
 
               if(f==0)
               { v[i][j] = start ;
                start-- ;
                f=1 ;
            }
            else 
            {
                v[i][j] = later ;
                later++ ;
                f=0 ;
            }
            }
        if(i&1) reverse(v[i].begin(),v[i].end()) ;
        }
 
 
        for(auto it :v)
        {
            for(auto a :it)
            {
                cout << a << " " ;
            }
            cout << endl ;
        }
 
 
 
    }
 
 
 
}