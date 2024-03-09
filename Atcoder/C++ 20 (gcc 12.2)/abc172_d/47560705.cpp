#include<bits/stdc++.h>
using namespace std ;

const int N = 1e7+1 ;

int Nod[N] ;

void NOD()
{
  for(int i =1 ;i<N ;i++)
  {
    for(int j = i ;j<N ;j+=i)
    {
      Nod[j]++ ;
    }

  }
}


int main()
{
  NOD() ;
  int n ; cin >> n ;
  long long ans =0 ;

  for(int i =1 ;i<=n ;i++)
  {
    ans+=(1LL*i*Nod[i]) ;
  }

  cout << ans << endl ;

}