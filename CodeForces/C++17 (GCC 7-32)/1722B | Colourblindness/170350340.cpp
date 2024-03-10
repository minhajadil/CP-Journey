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
 string a,b ;
 cin >> a >> b ;
 
 int same =1 ;
 
 for(int i =0 ;i<n ;i++)
 {
  if(a[i]=='G') a[i]='B' ;
  if(b[i]=='G') b[i]='B' ;
 }
 
 for(int i =0 ;i<n ;i++)
 {
  if(a[i]!=b[i]) same=0 ;
 }
 
 if(same==1) cout << "YES" << endl ;
 else cout << "NO" << endl ;
 
 
 
 }
}