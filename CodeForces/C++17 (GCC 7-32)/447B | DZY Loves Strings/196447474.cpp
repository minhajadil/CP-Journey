#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    string a ;
    cin >> a ;
    int k ;
    cin >> k ;
    map<char,int> l ;
    char x = 'a' ;
    int max =-1 ;
 
 
    for(int i =0 ;i<26 ;i++)
    {
        int r ;
        cin >> r ;
        if(max<r) max=r ;
        l[x+i]= r ;
    }
    long long sum =0 ;
    int mul= 1 ;
 
    for(int i =0 ;i<a.size();i++)
    { 
        sum+=(mul*l[a[i]]) ;
        mul++ ;
    }
    
    for(int i =1 ;i<=k;i++)
    {
        sum+=mul*max ;
        mul++ ;
    }
    cout << sum << endl ;
   
 
 
}