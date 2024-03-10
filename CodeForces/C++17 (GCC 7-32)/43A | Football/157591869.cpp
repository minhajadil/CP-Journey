#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int n ;
    cin >> n ;
    string a[n] ;
 
    map<string , int> ar ;
 
 
 
    for(int i=0 ;i<n ;i++)
    {
        cin >> a[i] ;
        ar[a[i]]++ ;
    }
 
 
      
    int r[2] ;
    string st[2] ;
    int i =0 ;
    int cnt =0 ;
 
 
    for(auto it : ar)
    {
        cnt++ ;
 
        st[i]=it.first ;
 
        r[i]= it.second ;
        i++ ;
 
    }
    if(cnt==1) cout << st[0] << endl ;
    else {
 
    if(r[0]<r[1]) cout << st[1] << endl ;
    else cout << st[0] << endl ;
}
 
 
}