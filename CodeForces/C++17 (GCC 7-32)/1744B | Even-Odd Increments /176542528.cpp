#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  int n,q ;
  cin >> n >> q ;
  int a[n] ;
  long long sume = 0 ;
  long long sumo =0 ;
  int cnto =0 ;
  int cnte =0 ;
 
  for(int i =0 ;i<n ;i++) 
  {
    cin >> a[i] ;
    if(a[i]%2==0) { sume+=a[i] ; cnte++ ; }
    else { sumo+=a[i] ; cnto++ ; }
  }
 
  while(q--)
  {
    long long t , s ;
    cin >> t >> s ;
 
    if(t==1) { sumo+=(s*cnto) ;
      if(s%2!=0) { cnte+=cnto ; cnto =0 ;}
    }
    else {  sume+= (s*cnte) ; if(s%2!=0) {
      cnto+=cnte ; cnte=0 ; 
    } }
    cout << sumo+sume << endl  ;
  }
  sume=0 ;
  sumo =0 ;
 
 
  }
}