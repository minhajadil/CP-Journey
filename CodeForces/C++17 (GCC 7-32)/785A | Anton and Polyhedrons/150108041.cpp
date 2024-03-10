#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int a ;
 cin >> a ;
 
 vector<string> pl(a) ;
 int sum=0 ;
 
 for(int i =0 ;i<a ;i++)
 {
  cin >>pl[i] ;
  if(pl[i]=="Tetrahedron") sum+=4 ;
  else if(pl[i]=="Octahedron") sum+=8 ;
  else if(pl[i]=="Cube") sum+=6 ;
  else if(pl[i]=="Dodecahedron") sum+=12 ;
  else if(pl[i]=="Icosahedron") sum+=20 ;
 
 }
 
cout << sum << endl ;
 
 
 
 
 
 
 
 
 
 
 
 
}