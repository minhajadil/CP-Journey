// Problem: A - Irreversible operation
// Contest: AtCoder - AtCoder Grand Contest 029

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()

// mistake in first sub : Didnt use LONG LONG

{
	string a ;
	cin >> a ;

	int b=0 ;
	int w =0 ;
	
	int sz = a.size() ;
	
	for(int i =0 ;i<sz ;i++)
	{
		if(a[i]=='B') b++ ;
		else w++ ;
	}
	
	if(b==0 || w==0) cout << 0 << endl ;
	else 
	{
		long long cnt =0 ;
		long long f = sz-(b-1) ;
		//cout << f << endl ;
		
		
		for(int i =0 ;i<sz ;i++)
		{
			if(a[i]=='B')
			{
				cnt+=(f-(i+1)) ;
				f++ ;
			}
			
			
		}
		cout << cnt << endl ;
	}
	
	
	


}