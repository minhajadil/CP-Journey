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
   
    vector<string> v ;
    string s1 = "" ;
    string s2= "" ;
    for(int i =0 ;i<(2*n)-2 ;i++)
    { string a ;
      cin >> a ;
      // cout << a << endl ;
      // cout << a.size() << endl ;
      if(a.size()==n-1 && s1.size()==0) s1= a ;
      else if(a.size()==n-1) s2=a ;
 
     }
     int j =n-2 ;
     int k = 1 ;
     //cout << s1 << " " << s2  << endl ;
 
     for(int i =0 ;i<n-1 ;i++)
     {
      if(s1[i]!=s2[j])
      {
        k=0 ;
        break ;
      }
      j-- ;
     }
 
     if(k==1) cout << "yes" << endl ;
     else cout << "No" << endl ; 
 
      }
}