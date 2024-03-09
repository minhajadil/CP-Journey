// Problem: A - Serval vs Monster
// Contest: AtCoder - AtCoder Beginner Contest 153

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()
{
	int h , a ;
	cin >> h >> a ;
	int cnt =0 ;
	
	while(h>0)
	{
		h-=a ;
		cnt ++ ;
	}
	
	cout << cnt << endl ;


}