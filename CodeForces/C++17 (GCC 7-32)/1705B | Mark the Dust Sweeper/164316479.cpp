#include<bits/stdc++.h>
using namespace std ;
 
const int N = 0 ;
 
int main()
{
  int t; 
  cin >> t ;
 
  while(t--)
  { 
    int n ;
    cin >> n ;
 
    int a[n] ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    } 
    int r=-1 ;
    for(int i =0 ;i<n-1;i++)
    {
        if(a[i]>0) { r=i  ; break ;}
    }
    if(r==-1) cout << 0 << endl ;
    else 
    {
        int cnt = 0 ;
        long long sum=0 ;
        for(int i =r ;i<n-1 ;i++)
        {   sum+=a[i] ;
          //  cout << a[i] << " " ;
            if(a[i]==0) cnt++ ;
        }
        //cout << endl ;
        //cout << sum << endl ;
        sum=sum+cnt ;
        cout << sum << endl ;
    }
 
     
 
 
  }
    }
 
 
 
 
 