#include<bits/stdc++.h>
using namespace std ;
 
// idea got from serotonin 
 
int main()
{
  int t ;
  cin >> t ;
 
  while(t--)
  {
    int n ;
    cin >> n ;
    int a[n] ;
 
    for(int i =0 ;i<n ;i++)
    {
      cin >> a[i] ;
    }
 
    vector<int> x ;
    x.push_back(a[0]-1) ;
    x.push_back(a[0]+1 );
    x.push_back(a[0]) ;
    // storing all possible move of point 1 
 
   
   int r=0 ;
 
    for(int i =0 ;i<=2 ;i++)
    { int b = x[i] ;
      int h =1 ;
      
 
      for(int j =1 ;j<n ;j++)
      {
        b++ ;
     
        if(abs(a[j]-b)>1) 
        {
          h=0 ;
        }
      } 
   
       // checking if we do a move in point 1 
         // is this possible to get consecutive elements
         // using the necessary move of every element
       if(h==1)
      {
        r=1 ;
        break ;
      }
    }
 
    if(r==1) cout << "yes" << endl ;
    else cout << "No" << endl ;
 
 
 
 
  }
 
}