#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--)
    {
        int n ;
        cin >> n ;
        string a ;
        cin >> a ;
 
        int  total= n-1 ;
 
        for(int i =2 ;i<n ;i++)
        {
            if(a[i]==a[i-2]) total-- ;
        } 
        // acadd --> add 
        //a|cad|d for this part you can get a |c,d|d -->acd , add 
        // if we use acacd--> a|cac|d --> after removing consecutive two element
        // which remains is a |c,c|d --> acd , acd which is basically same. so we will remove one instance of it
 
 
        cout << total << endl ;
    }
}