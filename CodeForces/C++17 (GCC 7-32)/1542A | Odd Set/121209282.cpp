// In the name of ALLAH
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main() 
{  int t ;
cin >> t ;
 
while(t--)
{
    
int n ;
cin >> n;   
n=2*n ;
int a[n] ;
for(int i=0 ;i<n ;i++)
{
    cin >> a[i] ;
    
}
 
  int ca =0 ;
  int co=0 ;
  
  for(int k=0 ;k<n ;k++)
{
    if(a[k]%2==0) ca++ ;
    else if(a[k]%2!=0) co++ ;
    
}
 
if(ca==co) cout << "Yes" << endl ;
else cout << "No" << endl ;
 
    
 
}
}
 