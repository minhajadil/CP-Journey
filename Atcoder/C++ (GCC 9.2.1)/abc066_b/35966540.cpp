// Problem: B - ss
// Contest: AtCoder - AtCoder Beginner Contest 066

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()
{
	char a[201] ;
	cin >> a ;
	
	int sz = strlen(a) ;
	
	if(sz%2!=0) sz=sz-1 ;
	else sz= sz-2 ;
	
	for(int i = sz ; i>=0 ;i-=2)
	{
		if(strncmp(a,a+i/2,i/2)==0) {
			cout << i << endl ;
			break ;
		}
	} 
	
	
}