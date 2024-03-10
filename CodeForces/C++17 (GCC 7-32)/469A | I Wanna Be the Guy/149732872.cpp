#include<bits/stdc++.h>
using namespace std ;
 
int main()
{   
 int level ;
 cin >> level ;
 
 int x ;
 cin >> x ;
 vector<int>l ;
 int c ;
 if(x==0) cin >> ws ;
 else {
 for(int i = 0 ;i<x ;i++)
  {
   
   cin >> c ;
   l.push_back(c) ;
  }
 
 }
 
 
 int y ;
 cin >>y ;
 if(y!=0)
 { 
 
 for(int k=0 ; k<y ;k++)
 {
  cin >> c;
  l.push_back(c) ;
 }
}
 
   if(x == 0 &&y ==0 ) cout << "Oh, my keyboard!" << endl ;
   else
{
 int size = x+y ;
 sort(l.begin(),l.end()) ;
 
 unique(l.begin() ,l.end()) ;
 int cnt =0 ;
 
 for(int r = 0 ;r<level ;r++)
 {
  int rr = r+1 ;
  if(l[r]==rr) cnt++ ;
 
 }
 if(cnt==level) cout << "I become the guy." << endl ;
 else cout << "Oh, my keyboard!" << endl ;
 
}
 
 
 
 
 
 
 
 
 
}