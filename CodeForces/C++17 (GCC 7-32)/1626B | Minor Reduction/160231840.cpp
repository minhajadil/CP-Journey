#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
   string a  ;
   cin >> a ;
 
   int casee =0 ; int sum ;
   int ind ;
   for(int i =0 ;i<a.size();i++)
   {
    int rs = a[i]-'0' + a[i+1]-'0';
    if(rs>=10)
 
    {
        casee=1 ;
        break ;
    }
   }
   if(casee==1)
   {
    for(int i=a.size();i>=0 ;i--)
    {
        int ls = a[i]-'0' + a[i-1]-'0' ;
 
        if(ls>9)
        { //cout << a[i]-'0' << endl ; ;
 
          //cout << a[i-1]-'0' << endl ;
            sum = ls ;
            ind = i-1 ;
            //cout << sum << endl ;
            //cout << ind << endl ;
            break ;
        }
    }
 
    for(int i=0 ;i<ind ;i++)
    {
        cout << a[i] ;
    }
    cout << sum ;
    for(int i=ind+2 ;i<a.size();i++)
    {
        cout << a[i] ;
    }
    cout << endl ;
}
else 
{
    int sum = a[0]-'0' + a[1]-'0' ;
    cout << sum ;
    for(int i = 2 ;i<a.size() ;i++)
    {
        cout << a[i] ;
    }
    cout << endl ;
}
 
 
}
}