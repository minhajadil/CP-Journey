// Problem: D. Divisibility by 2^n
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
bool cmp (int a , int b)
{
 return (a>b) ;
}
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int n ;
  cin >> n ;
  int a[n] ;
 
  for(int i =0 ;i<n ;i++)
  {
   cin >> a[i] ;
  }
  int power =0 ;
  
  for(int i =0 ;i<n ;i++)
  {
   if(a[i]%2==0)
   {
    while(a[i]%2==0)
    {
     a[i]=a[i]/2 ;
     power++ ;
    }
   }
  }
  
  int real = 0 ;
  int r ;
  int cross ;
  
  vector<int> f ;
  
  for(int i =1  ;i<=n ;i++)
  {
   r= i ;
   cross=0 ;
   if(r%2==0)
   {
    while(r%2==0)
    {
     r/=2 ;
     real ++ ;
     cross++  ;
    }
    f.push_back(cross) ;
    cross =0 ;
    
   }
  }
  
  // for(auto it :f) 
  // {
   // cout << it << endl ;
  // }
  
  sort(f.begin(),f.end(),cmp) ;
  
  
  // cout << real << endl ;
  // cout <<  power << endl ;
  
  if((n-power)>real) cout << -1 << endl ;
  else 
  {
   int need = n-power ;
 //  cout << need << endl ;
   int cnt =0 ;
   
   while(need>0)
   {
    for(auto it :f)
    {
     need-=it ;
     cnt++ ;
     if(need<=0) break ;
    }
   }
   cout << cnt << endl ;
   
   
  }
  
  
  
 }
 
 
}