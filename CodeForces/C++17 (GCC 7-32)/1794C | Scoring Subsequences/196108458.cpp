#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
    int a[n+1] ;
 
    for(int i =1 ;i<=n ;i++)
    {
      cin >> a[i] ;
    }
    a[0]=0 ;
 
    for(int i =1 ; i<=n ;i++)
    {
      int low =1 ;
      int high = i ;
      int pos_to_break = i ;
 
      while(low<=high)
      {
        int mid = (low+high)/2 ;
 
        if(i-mid+1<=a[mid])
        {
          pos_to_break=mid ;
          high =mid-1 ;
        }
        else 
        {
          low = mid+1 ;
        }
      }
      cout << i-pos_to_break+1 << " " ;
 
    }
    cout << endl ;
 
 
 
 
  }
}