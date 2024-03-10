#include<bits/stdc++.h>
using namespace std ;
 
int main()
{   int n ;
 cin >> n ;
 
 
 vector<int> a(n) ;
 int sum1 = 0 ;
 
 for(int i = 0 ;i<n ;i++)
 {
  cin >> a[i] ;
  sum1+=a[i] ;
 
 }
 
 sort(a.begin(),a.end()) ;
   
   int sum2 =0 ;
   int cnt = 0 ;
 
   while(sum1>=sum2)
   {
    sum2+=a[n-1] ;
    cnt++ ;
    sum1-=a[n-1] ;
    n-- ;
 
}
 
cout << cnt << endl ;
 
 
 
}