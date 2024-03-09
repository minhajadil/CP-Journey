#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n,k ;
    cin >> n >> k ;
    int a[n] , b[k] ;
    int max=0 ;

    //vector<int> r ;

    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
        if(a[i]>max) { max=a[i] ;
           // r.push_back(i) ; 
        }
    }
    int cnt=0 ;

   
   // int sz = r.size() ;
 



      for(int i =0 ;i<k ;i++)
    {
        cin >> b[i] ;
        if(a[b[i]-1]== max) cnt++ ;

    }



    if(cnt>=1) cout << "Yes" << endl ;
    else cout << "No" << endl ; 

















}