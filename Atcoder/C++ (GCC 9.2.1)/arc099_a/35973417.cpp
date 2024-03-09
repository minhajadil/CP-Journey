// Problem: C - Minimization
// Contest: AtCoder - AtCoder Beginner Contest 101

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()
{
	int n , k ;
	
	cin >> n >> k ;
	
	int a[n] ;
	int r = k-1 ;
	
	
	for(int i =0 ;i<n ;i++)
	{
		cin >> a[i] ;
	}
	int cnt =0 ;
	
	for(int i =1 ;i<n-k+1 ;i+=r)
	{
		cnt++ ;
	}
	
 cout << ++cnt << endl ;
	
	//else cout << cnt << endl ;
	
	


}