#include<bits/stdc++.h>
using namespace std ;
 
 
 
// Idea :1) generate all the possible GCD for all the segment
//       2) Now , for every indices , compute all the possible GCD (query)
//       3) and compute the largest length of the segment which has that possible GCD from that index (BS)
 
 
 
 
 
 
 
// sparse table (Range query : min , max , gcd in O(nlogn))
 
const int MAX = 1e5+10 ;
const int LOG = 25 ;
int A[MAX] ;
int ANS[MAX][LOG] ; // i = starting point , j = size of the range
 
int power[MAX] ;
 
int Query(int L , int R)
{
    int Range = R-L+1 ;
    int k = power[Range] ;
 
    return __gcd(ANS[L][k],ANS[(R-(1<<k)+1)][k]) ;
}
 
 void build_ans(int n )
 {
 
    power[1] =0 ;
 
    for(int i =2 ;i<MAX ;i++) // precomputing log 
    {
        power[i] = power[i/2] +1 ;
    }
 
    for(int i =0 ;i<n ;i++)
    {
        ANS[i][0]= A[i] ;
    }
 
    for(int j =1 ;j<LOG  ;j++) // precomputing the ans
    {
        for(int i =0 ;i+((1<<j)-1)<n ;i++)
        {
            ANS[i][j]= __gcd(ANS[i][j-1],ANS[i+(1<<(j-1))][j-1]) ;
        }
    }
 
}
//////////////////////////////////////////////////////////////
 
 
 
 
 
int main()
{
 
    int n ; cin >> n ;
 
    for(int i =0 ;i<n ;i++)
    {
        cin >> A[i] ;
    }
 
    build_ans(n) ;
 
    unordered_map<int,long long > qr ;
 
    for(int i =0 ;i<n ;i++)
    {
        
        int cur_pos =i ;
 
        while(cur_pos<n)
        {
            int cur_gcd = Query(i,cur_pos) ;
 
           int l = cur_pos , r = n-1 , ans ;
 
         while(l<=r )
        {
            int mid = (l+r)/2 ;
 
            if(Query(i,mid)==cur_gcd) 
            {
                ans = mid ;
                l= mid+1 ;
            }
            else 
            {
                r= mid-1 ;
            }
        }
 
       // cout << cur_gcd << " " << ans << " " << cur_pos << endl ; 
       
        qr[cur_gcd]+=(ans-cur_pos+1) ;
 
        cur_pos = ans+1 ;
     }
 
    
    }
 
    int q ; cin >> q ;
 
    while(q--)
    {
        int x ; cin >> x ;
 
        cout << qr[x] << endl ;
    }
 
}