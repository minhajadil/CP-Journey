#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <int,int> pii;
 
int n ; 
ll dp[101][100001] ;
ll w[101] , v[101] ;
ll inf = 1e16 ;


ll min_weight(int i , int value_till_now)
{
	  
    if(i==n+1)
    {
        if(value_till_now==0)
        {
            return 0 ;
        }
        else return inf ;
    }
    if(dp[i][value_till_now]!=-1) return dp[i][value_till_now] ;

    ll c2 = min_weight(i+1,value_till_now) ;


    if(value_till_now-v[i]>=0)
    { c2 = min(c2,min_weight(i+1, value_till_now-v[i]) +w[i]) ;
}
    

    return dp[i][value_till_now]= c2 ; 
}



int main ()
{
	  memset(dp,-1,sizeof dp) ;
    cin >> n ; int weight ; cin >> weight ;
   

    for(int i =1 ;i<=n ;i++)
    {
        cin >> w[i] >> v[i] ;

    }
    int  ans = 0 ;
  

    for(int i = 0 ;i<=100000 ;i++)
    {
        if(min_weight(1,i)<=weight) ans = i ;

    }

    cout << ans << endl ;

    


    return 0;
}