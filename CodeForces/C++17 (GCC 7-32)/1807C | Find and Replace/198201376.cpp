#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
 
int main()
{
 int t ;
 cin >> t ;
 
 while(t--)
 {
  int  n ;
  cin >> n ;
 
  string a ;
  cin >> a ;
 
  string s= "" ;
 
  map<char,char> m ;
  char x = 'a' ;
 
  for(int i =0 ;i<26 ;i++)
  {  
   m[x+i]='5' ;
 
  }
  
 
  m[a[0]]='1' ;
  s+='1' ;
 
 
 
   for(int i =1 ;i<n ;i++)
  {   
   if(m[a[i]]=='5')
   {
    if(m[a[i-1]]=='0')
    { s+='1' ;
   m[a[i]]='1' ;
 
  } 
    else  {s+='0' ;
    m[a[i]]='0' ;
 
   }
  }
   else s+=m[a[i]] ; 
   
  }
 
 
 
  int f =1 ;
 
 
  for(int i =0 ;i<n-1 ;i++)
  {
   if(s[i]==s[i+1]) 
   {
    f=0 ;
    break ;
   }
  }
 
 
  for(int i =0 ;i<26 ;i++)
  {
   m[x+i]='5' ;
 
  }
  s="" ;
 
  m[a[0]]='0' ;
  s+='0' ;
 
 
 
  for(int i =1 ;i<n ;i++)
  {
   if(m[a[i]]=='5')
   {
    if(m[a[i-1]]=='0')
    { s+='1' ;
        m[a[i]]='1' ;
 
          } 
    else  {s+='0' ;
    m[a[i]]='0' ;
 
   }
  } 
  
   else s+=m[a[i]] ; 
 
   
  }
 
 
 
 
  int c =1 ;
 
  for(int i =0 ;i<n-1 ;i++)
  {
   if(s[i]==s[i+1]) 
   {
    c=0 ;
    break ;
   }
  }
 
  if(f==1 || c==1) cout << "yes" << endl ;
  else cout << "no" << endl ;
 
 
 
 
 
 
 
 }
 
 
 
 
 
}
 
 