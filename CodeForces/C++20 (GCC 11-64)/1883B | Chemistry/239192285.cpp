#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
 
int main()
{
  int t ; cin >> t ;
 
  while(t--){
    int n,k ; cin >> n >> k ;
    string s ; cin >> s ;
 
    map<char,int>mp ;
 
    for(int i =0 ;i<n ;i++)
    {
      mp[s[i]]++ ;
    }
 
    int mn_removal=0 ;
 
    for(auto it : mp){
      mn_removal+=(it.second)%2 ;
    }
 
    if(mn_removal>0) mn_removal-- ;
 
    if(mn_removal>k) cout << "NO" << endl ;
    else cout << "YES" << endl ;
 
 
  }
 
 
}