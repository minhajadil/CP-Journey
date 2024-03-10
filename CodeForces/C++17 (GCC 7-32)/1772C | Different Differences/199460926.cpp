#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int k , n ;
    cin >> k >> n ;
    int cnt= 1 ;
    int r= 1 ;
    cout <<r << " " ;
 
    for(int i= 2 ;i<=k ;i++)
    {
      if(n-(r+cnt)>=k-i) { cout << r+cnt << " " ;
      r= r+cnt ;
      cnt++ ;
 
    }
    else{
      cout << r+1 << " " ;
      r++ ;
    }
    }
    cout << endl ;
  }
}