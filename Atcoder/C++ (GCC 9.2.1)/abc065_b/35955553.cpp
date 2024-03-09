// Problem: B - Trained?
// Contest: AtCoder - AtCoder Beginner Contest 065

// May the provider keep us content

#include<bits/stdc++.h>
using namespace std ;


int main()
{
	int n ;
	cin >> n ;
	
	map<int,int> switches ;
	
	for(int i =1 ;i<=n ;i++)
	{
		int x ;
		cin >> x ;
		switches[i]= x ; 
	}
	int cnt =0 ;
	int r =1 ;
	int present =1 ;
	
	while(n--)
	{
		if(switches[present]==2)
		{
			cnt++ ;
			break ;
		}
		else if(present==switches[switches[present]])
		{
			r=0 ;
			break ;
		}
		else {
			present = switches[present] ;
			cnt++ ;
		}
	}
	if(r==0 || switches[present]!=2) cout << -1 << endl ;
	else	cout << cnt << endl;
	


}