#include<bits/stdc++.h>
using namespace std ;
 
const int N = 9000 ;
bool a[N+30] ;
 
 
int main()
{
 
    
 
    for(int i = 1000 ;i<=9015 ;i++)
    {
        unordered_set<int> num ;
        int k = i ;
        while(k!=0)
        {  int r = k%10 ;
            num.insert(r); 
            k/=10 ; 
        }
        if(num.size()==4) a[i]= true ;
    }
 
    int n ;
    cin >> n ;
 
    for(int i = n+1 ;i <=9015 ;i++ )
    {
        if(a[i]==true) {
            cout << i << endl ;
            break ;
        }
        else continue ;
 
 
    }
 
 
}