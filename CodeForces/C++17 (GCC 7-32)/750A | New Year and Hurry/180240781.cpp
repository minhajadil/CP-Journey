// Problem: A. New Year and Hurry
// Contest: Codeforces - Good Bye 2016
 
// May the provider keep us content
 
#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
 int n , k ;
 cin >> n >> k ;
 
 int remain = 240-k ;
 int total=0 ;
 int time = 5 *1 ;
 if(time<=remain) total++ ;
 
 
 for(int i =2 ;i<=n ;i++)
 {   
    time+=5*i ; 
  
  //cout << time << endl ;
  if(time>remain) break ;
  
  //cout << time << endl ;
  total++ ;
  
 }
 
 cout << total << endl ;
 
 
 
 
}