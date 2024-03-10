#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
 
   int n ;
   cin >> n ;
   vector<int> v;
 
   for(int i=0 ;i<n ;i++)
   {
    int x ;
    cin >> x ;
    v.push_back(x) ;
   }
   
   int s = 0 ;
   int d =0 ;
   int turn =0 ;
 
   while(!v.empty())
   {
    if(turn==0)
    {
     if(v.front()>v.back())
     {
      s+=v.front() ;
      v.erase(v.begin()) ;
     }
     else{ s+=v.back() ;
      v.pop_back() ;}
     turn = 1 ;
    }
    else
    {
     if(v.front()>v.back())
     {
      d+=v.front() ;
      v.erase(v.begin()) ;
     }
     else{ d+=v.back() ;
      v.pop_back() ;}
     turn = 0 ;
 
 
    }
 
 
 
   }
   
 
cout <<  s << " " << d << endl ;
 
 
 
 
 
 
}