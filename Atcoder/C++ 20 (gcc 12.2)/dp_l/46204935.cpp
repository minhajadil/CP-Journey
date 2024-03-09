#include<bits/stdc++.h>
using namespace std ;

#define ll long long 
const int N = 3e3+5 ;

ll dp[N][N][3] ;

bool vis[N][N][3] ;

ll a[N] ; 



// idea : defining a function which returns the score for a segment for current player

ll final_score(int l , int r,int player)
{
    if (l>r ) return 0 ;

    if(vis[l][r][player]) return dp[l][r][player] ;

    vis[l][r][player] =true ;



    if(player==1)
    {
        ll c1 = a[l]+ final_score(l+1,r,2) ;
        ll c2 = a[r] + final_score(l,r-1,2) ;

        return dp[l][r][player]= max(c1,c2) ;
    }
    else
    {
        ll c1 = -a[l] + final_score(l+1,r,1) ;
        ll c2 = -a[r] + final_score(l,r-1,1) ;
        return dp[l][r][player] = min(c1,c2) ; 
    }




}




int main()
{
    int n ; cin >> n ;


    for(int i =1 ;i<=n ;i++)
    {
        cin >> a[i] ;

    }

    cout << final_score(1,n,1) << endl ;



}