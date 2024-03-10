#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int n ;
    cin >> n ;
 
    vector<int> a(n) ;
    for(int i =0 ;i<n ;i++)
    {
        cin >> a[i] ;
    }
    vector<int> b(n); 
    b= a ;
 
    sort(b.begin(),b.end()) ;
 
 
 
    int s =-1 ,e=-1 ;
 
    for(int i=0 ;i<n ;i++ )
    {
        if(a[i]!=b[i]) {
            s= i ;
            break ;
        }
    }
 
   if(s!=-1)
   { for(int i =s+1 ;i<n ;i++)
   {
    if(a[i]!=b[i])
    {
        e=i ;
    }
   }
}
 
if(s==-1)
{
    if(is_sorted(a.begin(),a.end())) cout << "yes" << endl ;
    cout << 1 << " " << 1 << endl ;
}
else
{ 
    reverse(a.begin()+s,a.begin()+e+1) ;
 
    if(is_sorted(a.begin(),a.end())){ cout << "yes" << endl ;
    cout << s+1 << " " << e+1 << endl ; }
    else cout << "no" << endl ;
}
 
 
 
}