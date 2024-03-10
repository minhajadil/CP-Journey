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
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
if (n%2!=0) cout << "Mike" << endl ;
else 
{
    // if n is even then both will play optimally will try as 
    //much as possible to keep their position fill with stones
 
    // but if there is less stones in odd position(index) then mike will always
    // end up with 0 
   
   int min =a[0] ;
   int index=1 ;
 
   for(int i =1 ;i<n ;i++)
   {
    if(a[i]<min) {
        min = a[i] ;
        index = i+1 ;
    }
 
   }
   if(index%2==0) cout << "Mike" << endl ; // if even position has minimum value then joe will lose
   else cout << "Joe" << endl ;
 
 
 
 
}
 
 
 
}
 
 
 
}