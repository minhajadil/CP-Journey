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
  cin >> ws ; 
  string s ;
  cin >> s ;
 // cout << s << endl ;
  //cin >> ws ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
    cin >> a[i] ;
  }
  // for(auto it :a)
  // {
  //   cout << it << " " ;
  // } 
  // cout << endl ;
 
 
 
  int mini ;
  long long sum  ;
  int j ;
  long long ans =0 ;
 
 
//   if(s[0]=='1') ans +=a[0] ;
  // cout << s[0] << endl ;
  // cout << ans << endl ;
 
 
  for(int i =0 ;i<n ;i++)
  {
    
    if(s[i]=='0')
    {mini = a[i] ;
  //  cout << mini << endl ;
    sum= a[i] ;
    j= i+1 ;
    while(j<n && s[j]=='1')
    {
      if(mini>a[j])
      {
        mini = a[j] ;
 
      }
      sum+=a[j] ;
      j++ ;
   //   cout << sum << " " << mini << endl ;
      
      
    }
    i=j-1 ;
 
//cout << sum << " " << mini << endl ;
 
    
    ans+=(sum-mini) ; }
    else if(s[i]=='1') ans+=a[i] ;
 //   cout <<ans << endl ;
 
  }
  cout << ans << endl ;
 
 
 
  }
}