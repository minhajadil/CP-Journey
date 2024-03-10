#include<bits/stdc++.h>
using namespace std ;
 
const int N = 0 ;
 
int main()
{
  int t; 
  cin >> t ;
 
  while(t--)
  { 
    int n ;
    cin >> n ;
 
    string a ;
    cin >> a ;
 
    map<char , int> m ;
    int cnt =0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        m[a[i]]++ ;
        if(m[a[i]]==1) cnt+=2 ;
        else cnt++ ;
    } 
    cout << cnt << endl ;
    
        
    
    } 
     
 
 
  }
 
 
 
 
 