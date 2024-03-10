// Problem: A. Case of the Zeros and Ones
// Contest: Codeforces - Codeforces Round #310 (Div. 2)
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
int n ;
cin >> n ;
 
string a ;
cin >> a ;
int cnt =0 ;
int cnt1=0 ;
 
for(int i =0 ;i<n ;i++)
{
 if(a[i]=='0') cnt++ ;
 else cnt1++ ;
}
 
int mini = min(cnt,cnt1) ;
 
cout << n-(2*mini) << endl ;
 
 
 
 
 
 
}