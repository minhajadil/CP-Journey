#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int a, b ;
    cin >> a >> b ;
    string s , f ;
    cin >> s >> f ;
    reverse(f.begin(),f.end()) ;
    
    s+=f ;
    int n = s.size() ;
    int ind =-1 ;
 
    for(int i =0 ;i<n-1 ;i++)
    {
      if(s[i]==s[i+1])
      {
        ind = i+1 ;
        break ;
      }
    }
    //cout << ind << endl ;
 
    if(ind!=-1)
    {
      int ha = 1 ;
      for(int i = ind ;i<n-1 ;i++)
      { //cout << s[i] << " " << s[i+1] << endl ;
        if(s[i]==s[i+1])
        {
          ha=0 ;
          break ;
        }
      }
 
      if(ha==0) cout << "no" << endl ;
      else cout << "yes" << endl ;
    }
    else cout << "yes" << endl ;
 
 
 
  }
 
 
}