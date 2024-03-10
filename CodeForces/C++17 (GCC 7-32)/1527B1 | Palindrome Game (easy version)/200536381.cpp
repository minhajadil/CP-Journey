#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
 
//mistake : Didnt think about if the current string is not palindrome 
// both operation could be done 
 
int main()
{
  int t ;
  cin >> t ;
  while(t--)
  {
  int n ;
  cin >> n ; 
 
  string a ;
  cin >> a ;
 
  ll z =0 ;
 
  for(int i =0 ;i<n ;i++)
  {
    if(a[i]=='0') z++;
  } 
 
  // every player will try to make the string palindrome
  // so that the other player cant reverse it or minimum spend a dollar
  // this way on their turn as the str is not pal , then they can reverse it / spend a dollar if needed
 
  // but if there's one 0 left , current player will reverse , because there is no move for him afterward
 
 
  if(z==1) cout << "BOB" << endl ;
  else 
  {
    if(z%2!=0) cout << "ALICE" << endl ;
    else cout << "BOB" << endl ; 
  }
 
  // 10001 --. 10101 al++ , 11101 bob++ , 10111 al+0 , 1111 , bob++ , bob =2 , al=1 
  /// 100001 --> 110001 al++ , 110011 bob++ , 111011 a++ , 110111 bob+=0 , 111111 al++ , al =3 , bob =1 ;  
 
 
 
 
 
  
 
 
 
 
 
  }
}