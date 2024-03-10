#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin >> n ;
 
 
    vector<pair<string , string>> flower ;
    for(int i =0 ;i<n ;i++)
    {
        string  a ,b ;
        cin >> a >> b ;
        flower.push_back({a,b}) ;
    }
    
    sort(flower.begin(),flower.end()) ;
    int size = unique(flower.begin(),flower.end()) - flower.begin();
    
    cout << size << endl ;
    
 
    
    
}