#include<bits/stdc++.h>
using namespace std ;
 
 
 
const int N = 1e5+10 ;
int parent[N] ;
int cmp_size[N] ;
 
void make(int n)
{
    for(int i =1 ;i<=n ;i++)
    {
        parent[i]=i ;
        cmp_size[i]= 1; 
    }
}
 
int find(int n)
{
    if(parent[n]==n) return n ;
    return parent[n] =find(parent[n]) ;
}
 
int previous ;
 
void Union(int a , int b)
{
 
    if(a!=b)
    {
        if(cmp_size[a]<cmp_size[b])
        {
            swap(a,b) ;
        }
        parent[b] = a ;
        cmp_size[a]+=cmp_size[b] ;
        previous = a ;
    }
}
 
 
 
int main()
{
    int n ; cin >> n ;
    make(n) ;
 
    vector<pair<int,int>> extra ;
 
   // int prev=-1 ;
 
 
    for(int i =0 ;i<n-1 ;i++)
    {
        int x , y ; cin >> x >> y ;
 
        int a = find(x) ;
        int b = find(y) ;
        if(a==b)
        {
            extra.push_back({x,y}) ;
            continue ;
        }
       // if(prev==-1) prev = x ;
        Union(a,b) ;
    }
 
    int cnt =0 ;
   
    vector<int>broken ;
 
 
 
    for(int i =1 ;i<=n ;i++)
    {
        if(find(i)==i && find(i)!=previous)
        {
            cnt++ ;
            broken.push_back(i) ;
            parent[i]=previous ;
        }
    }
 
    cout << cnt << endl ;
    
    for(int i =0 ;i<cnt ;i++)
    {
        cout << extra[i].first << " " << extra[i].second << " " << previous << " " << broken[i] << endl ;
    }
}