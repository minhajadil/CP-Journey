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
 
  map<string , int> r ;
  string a[3][n] ;
 
  for(int i =0 ;i<3;i++)
  {
   for(int j =0 ;j<n ;j++)
   {
    string s ;
    cin >> s ;
    a[i][j]=s ;
    // cout << i << " " << j << endl ;
    // cout << a[i][j] << endl ;
    r[s]++ ;
   }
  }
 
  // for(auto it : r)
  // {
  //  cout << it.first << " " << it.second ;
  // }
  // cout << endl ;
 
  for(int i=0 ;i<3 ;i++)
  {   
   int cnt =0 ;
   for(int j=0 ;j<n ;j++)
   {
    if(r[a[i][j]]==1) cnt+=3 ;
    else if(r[a[i][j]]==2) cnt+=1 ;
   }
   cout << cnt << " " ;
 
  }
  cout << endl ;
 
 
}
 
 
}