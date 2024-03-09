#include<bits/stdc++.h>
using namespace std ;



int main()
{
    string a ;
    cin >> a ;
    int sz=a.size() ;
    map<char,int> b ;

    if(sz%2!=0) cout << "No" << endl ;
    else 
    {
        for(int i =0 ;i<sz ;i++)
    {
        b[a[i]]++ ;
    }
    int cnt =0 ;

    for(auto it : b)
    {
        if(it.second%2==0) {

            cnt++ ;
        }

    }
    int r = b.size() ;
    if(cnt==r) cout << "Yes" << endl ;
    else cout << "No" << endl ;
    }




}