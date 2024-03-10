#include<bits/stdc++.h>
using namespace std ;
 
// mistakes in first attempt : 
//1. b er moro maan gula k a er shob cheye choto maan er shathe boshaisi , which is not optimal
 
// correct approach :
// 1. a er boro exacty x ta number er niche b er choto number gula boshbe
 
 
 
 
 
void solve()
{
  int n ,k; cin >> n >> k  ;
 
 
  vector<pair<int,int>> a(n+1) ;
  int b[n+1] ;
 
 
  for(int i =1 ;i<=n ;i++)
  {
    int x ; cin >> x ;
    a[i]={x,i} ;  
}
 
 
 
  for(int i =1 ;i<=n ;i++)
  {
    cin >> b[i] ;
  }
 
 
  sort(a.begin(),a.end()) ;
 
 
  sort(b+1,b+n+1) ;
  int x=0 ; 
  int ans[n+1];
 
  // making sure big a gets less b
 
  for(int i =n-k+1, j = 1 ;i<=n ;i++,j++ )
  {
    ans[i]=b[j] ;
  }
 
  for(int i =1, j= k+1 ;i<=n-k ;i++,j++)
  {
    ans[i]=b[j] ;
  }
 
 
 
  for(int i =1 ;i<=n ;i++)
  {
    if(a[i].first>ans[i]) x++ ;
  }
 
 
  if(x!=k){
    cout << "no" << endl ;
    return ;
  }
 
  int ans1[n+1] ;
 
 
  for(int i =1 ;i<=n ;i++)
  {
    ans1[a[i].second] = ans[i] ;
  }
 
  cout << "YEs"<< endl ;
 
  for(int i=1 ;i<=n ;i++)
  {
    cout << ans1[i] << " " ;
  }
  cout << endl ;
 
 
  
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
 
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
   int t ; cin >> t ;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
 
 
 
 
 
 