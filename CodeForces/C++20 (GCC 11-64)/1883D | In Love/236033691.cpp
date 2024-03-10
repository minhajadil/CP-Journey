#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int q ; cin >> q ;
 
    multiset<int> f_b ; // first basis
    multiset<int> s_b ; //second basis
 
 
    while(q--)
    {
        char op ; cin >> op ;
        int l , r ; cin >> l >>r ;
 
        if(op=='+')
        {
            s_b.insert(r) ;
            f_b.insert(l) ;
        }
        else
        {
            auto it = f_b.find(l) ;
            auto it1 = s_b.find(r) ;
            f_b.erase(it) ;
            s_b.erase(it1) ;
        }
 
        if(!f_b.empty())
        {
 
        auto it = s_b.begin() ;
        auto it1 = --f_b.end() ;
 
        if(*it<*it1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
        }
        else cout <<"NO" << endl ; 
 
    }
}