#include<bits/stdc++.h>
using namespace std ;



int main()


{

    string a ;
    cin >> a ;
    int sz=a.size() ;
    string r = a ;
    sort(r.begin(),r.end()) ;
   auto it = unique(r.begin(),r.end()) ;
   r.erase(it , r.end()) ;

   int sz1= r.size() ;


    bool u = false ;
    bool l = false ;
    bool unique = true ;

    for(int i =0 ;i<sz ;i++)
    {
        if(isupper(a[i])) u=true ;
        if(islower(a[i])) l= true ;
    }

    if(u && l && sz==sz1) cout << "Yes" << endl ;
    else cout << "No" << endl ;




}