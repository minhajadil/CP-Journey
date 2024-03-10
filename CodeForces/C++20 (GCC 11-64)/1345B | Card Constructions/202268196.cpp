#include<bits/stdc++.h>
using namespace std ;
 
 
#define ll long long 
 
ll n ;
 
bool check(ll g)
{
    ll f = (g*(4+(g-1)*3))/2 ;
     if(f<=n) return true ;
     else return false ;
 
}
 
 
 
int main()
{
 
    int t ;
    cin >> t ;
while(t--)
    {
 
  
        cin >> n ;
        int cnt =0 ;
 
        while(n>=2)
        {
            ll l = 1 ; ll r = 1e9 ;
            ll ans =0 ;
 
            while(l<=r)
            {
                ll mid = (l+r)/2 ;
 
                if(check(mid))
                {
                    ans = mid ;
                    l= mid +1 ;
                }
                else 
                {
                    r= mid -1 ;
                }
            }
 
         //   cout << ans << endl ;
 
            //cout <<  (ans*(4+(ans-1)*3))/2 << endl ;
          //  cout << n << endl ;
 
            n = n- (ans*(4+(ans-1)*3))/2 ;
           // cout << n <<endl ;
            cnt++ ;
 
        }
 
        cout << cnt << endl ;
 
    }
 
 
 
 
 
 
 
 
}