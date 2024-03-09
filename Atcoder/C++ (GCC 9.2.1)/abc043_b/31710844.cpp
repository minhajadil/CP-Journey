#include<bits/stdc++.h>
using namespace std ;



int main()
{

    string a  ;
    cin >> a ;
    int sz=a.size() ;
    vector<int> n ;

    for(int i =0 ;i<sz ;i++)
    {
        if(a[i]=='0') n.push_back(0) ;
        else if(a[i]=='1') n.push_back(1) ;
        else {
            if(n.empty()) continue ;
            else n.pop_back() ;
        }

    }
    int sz1 =n.size() ;
for(int i =0 ;i<sz1 ;i++)
{
    cout << n[i] ;
}


cout << endl ;


}