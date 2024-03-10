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
 
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
    int rp =0 , np=0 ;
 
    for(int i =0 ;i<n ;i++)
    {
        if(i%2==0 && a[i]%2!=0)
        {
            rp++ ;
        }
        if(i%2!=0 && a[i]%2==0)
        {
            np++ ;
        }
    }
 
    if(np==rp) cout << np << endl ;
    else cout << -1 << endl ;
 
     
 
 
  }
 
 
 
 
 
}