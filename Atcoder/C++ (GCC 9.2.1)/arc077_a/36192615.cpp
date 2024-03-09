// Problem: C - pushpush
// Contest: AtCoder - AtCoder Beginner Contest 066

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()
{
	int n ;
	cin >> n ;
	
	int a[n] ;
	deque<int> d ;
	
	for(int i =0 ;i<n ;i++)
	{
		cin >> a[i] ;
	}
	
	
	if(n%2!=0)
	{
		for(int i =0 ;i<n ;i++)
		{
			if((i+1)%2!=0) d.push_front(a[i]) ;
			else d.push_back(a[i]) ;
		}
	} 
	else 
	{
		for(int i =0 ;i<n ;i++)
		{
			if((i+1)%2==0) d.push_front(a[i]) ;
			else d.push_back(a[i]) ;
		}
		
	}
	
	for(auto it :d)
	{
		cout << it << " " ;
	}
	cout << endl ;
	
	
	


}