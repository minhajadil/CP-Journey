#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 string a,b ;
 cin >> a >> b ;
 string c ;
 cin >> c ;
 
 string n= a+b ;
 
 sort(n.begin(),n.end()) ;
 sort(c.begin(),c.end()) ;
 
 int size1 =n.size() ;
 int size2 =c.size() ;
 int cnt=0 ;
 
 if(size1!=size2) cout << "NO" << endl ;
 else {
  for(int i =0 ;i<size1;i++)
  {
   if(n[i]==c[i]) cnt++ ;
  }
  if(cnt==size1) cout << "YES" <<endl ;
  else cout << "NO"<< endl ;
 }
 
 
 
 
 
 
 
 
 
 
 
}