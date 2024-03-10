#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
void solve()
{
   string n ; cin >> n ;
   int cnt=0 ;
 
     for(int i =0 ;i<n.size() ;i++)
   {
    if(n[i]!='0') cnt++ ;
   }
   cout << cnt << endl ;
 
   for(int i =0 ;i<n.size() ;i++)
   {
    if(n[i]!='0')
    {
     cout << n[i] ;
     for(int j =i+1 ;j<n.size() ;j++ )
     {
      cout <<0 ;
     }
     cout << " " ;
    }
   }
   cout << endl ;
  
}
 
 
 
int main()
{
 
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 