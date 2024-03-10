#include<bits/stdc++.h>
using namespace std ;
 
 
int frq[30] ;
int main()
{
  int q ; cin >> q ;
 
  
 
  while(q--){
    int op , x ; cin >> op >> x ;
 
    if(op==1){
      frq[x]++ ;
    }
    else{
      for(int i =29 ;i>=0 ;i--)
      {
        int max_bhaag = min(x/(1<<i) ,frq[i]) ;
       
        x-=max_bhaag*(1<<i) ;
      }
 
      if(x==0) cout << "YES" << endl ;
      else cout << "NO" << endl ;
 
 
 
    }
 
 
 
 
  }
 
}