#include<bits/stdc++.h>
using  namespace std ;
 
 
int main()
{
    int level ;
    cin >> level ;
    int a ;
    cin >> a ;
    unordered_set<int> total ;
    for(int i =0 ;i<a ;i++)
    {
        int x ;
        cin >> x ;
        total.insert(x) ;
    }
    int b ;
    cin >> b ;
 
    for(int i =0 ;i<b ;i++)
    {
        int y ;
        cin >> y ;
        total.insert(y) ;
    }
 
    if(total.size()==level) cout << "I become the guy." << endl ;
    else cout << "Oh, my keyboard!" << endl ;
 
 
 
 
 
    
 
 
}
 