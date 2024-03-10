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
    int x ;
    cin >> x ;
    int r = (2*n) ;
 
    int a[r] ;
 
    for(int i=0 ;i<r ;i++)
    {
        cin >> a[i] ;
    } 
 
    sort(a,a+r) ;
 
    // for(int i =0 ;i<r ;i++)
    // {
    //     cout << a[i] << " " ;
    // }
    // cout << endl ;
 
    bool f = 0 ;
    int i =n-1 ;
    r=r-1;
 
 
 
    while(i>=0)
    {//    cout << r << " " << i << endl ;
    //     cout << a[r]-a[i] << endl ;
        if(a[r]-a[i]>=x) {
            f=1 ;
        }
        else {
            f=0 ;
            break ;
        }
        i--;
        r-- ;
    }
        if(f==1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
     
 
 
  }
 
 
 
 
 
}