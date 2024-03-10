#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 
    int t ;
    cin >> t ;
 
   while(t--)
    {
    int n , k ;
    cin >> n >> k ;
    int r[n] ;
    int add[n] ;
    map<int , int> ram ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> r[i] ;
 
    }
    for(int i =0 ;i<n ;i++)
    {
        cin >> add[i] ;
        ram[r[i]]+= add[i] ;
    }
 
    // for(auto it : ram )
    // {
    //     cout << it.first << " " <<it.second << endl ;
    // }
    
  
    for(auto it : ram)
    {
        if(it.first<=k) {
            k+=it.second ;
        }
    }
cout << k << endl ;
 
    
 
 
}
 
 
 
 
}