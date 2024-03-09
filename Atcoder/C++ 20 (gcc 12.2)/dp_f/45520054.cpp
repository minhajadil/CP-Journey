#include<bits/stdc++.h>
using namespace std ;
 
//............// define///.................... //
 
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ff first
#define second ss 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

 string s , t ;
const int N = 5000 ;
int dp[N][N] ;


int lcs(int  i ,int j)
{
	if(i==s.size() || j==t.size()) return 0 ;

	if(dp[i][j]!=-1) return dp[i][j] ;

	// two situation occurs at the beginning 
	// either the letters in string a and b are same for i , j or they're not same 

	// if they are same then adding 1 to the ans for the current state is optimal 
  int ans=0 ;
	if(s[i]==t[j]) 
	{
		ans+=1 ;
		ans+=lcs(i+1,j+1) ;
	}
	// else there is two choices , either we can shift i , or shift j. and then this a new state , and we take the max one 
	else 
	{
		ans= max(lcs(i+1,j),lcs(i,j+1)) ;
	}
	return dp[i][j] = ans  ;

}

void lcs_ans(int i , int j)
{
    if(i==s.size() || j==t.size())
    {
        return ;
    }
    if(s[i]==t[j])
    {
        cout << s[i] ;
        lcs_ans(i+1,j+1) ;
    }
    else
    {
        int a= lcs(i,j+1) ;
        int b = lcs(i+1,j) ;
        if(a>b) lcs_ans(i,j+1) ;
        else lcs_ans(i+1,j) ;
    }
    
}








void solve()
{
    memset(dp,-1 , sizeof dp ) ;

	
	cin >>  s >> t ;
	//cout << s << t << endl ;

	lcs_ans(0,0) ;
	
}












int main()
{
fastio() ;
  #ifndef ONLINE_JUDGE
  freopen("Error.in", "w", stderr);
#endif
 
 
   int t =1;
   while(t--)
   {
 
     solve() ;
    }
 
 
 
 
 
}
