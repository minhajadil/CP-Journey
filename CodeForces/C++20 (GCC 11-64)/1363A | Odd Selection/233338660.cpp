#include<bits/stdc++.h>
using namespace std ;
 
 
 
void solve()
{
  int n , x ; cin >> n >> x ;
 
  int odd=0 , even =0 ;
 
  for(int i =0 ;i<n ;i++)
  {
   int x ; cin >> x ;
   if(x&1) odd++;
   else even++ ;
  }
  // efficient implementation + bruteforce
 
  // amdr ans e odd number of odd number lagbei
  // so amra check korbo i number of odd number niye set ta build kora jai kina
 
  for(int i =1 ;i<=min(x,odd) ;i+=2)
  {
   if(x-i<=even)
   {
    cout << "YEs" << endl ;return ;
   }
  }
  cout << "NO" << endl ;
  
  
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
 
 
 
 
 
 