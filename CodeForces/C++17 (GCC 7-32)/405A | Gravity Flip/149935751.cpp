#include<bits/stdc++.h>
using namespace std ;
 
typedef vector<int> vi ;
int main()
{   
 int n ;
 cin >> n ;
    
    vi a ;
 
    for(int i =0 ;i<n ;i++)
    {
     int x ;
     cin >> x ;
 
     a.push_back(x) ;
    }
 
sort(a.begin(),a.end()) ;
 
for(auto u : a )
{
 cout << u << " " ;
}
cout << endl ;
 
 
 
 
 
 }
 
 
 