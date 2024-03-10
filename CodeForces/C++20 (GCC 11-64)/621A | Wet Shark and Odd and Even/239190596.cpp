#include<bits/stdc++.h>
using namespace std ;
 
using ll = long long ;
 
 
int main()
{
  int n ; cin >> n ;
 
  vector<int> odd ;
 
  ll sum=0 ;
  ll o_sum=0 ;
 
  for(int i =0 ;i<n ;i++)
  {
    int x ; cin >> x ;
    if(x%2!=0){
      odd.push_back(x) ;
      o_sum+=x ;
    }
    else sum+=x ;
  }
  sort(odd.begin(),odd.end()) ;
 
  if(odd.size()%2!=0) cout << sum+o_sum-odd[0] << endl ;
  else cout << sum+o_sum << endl ;
 
}