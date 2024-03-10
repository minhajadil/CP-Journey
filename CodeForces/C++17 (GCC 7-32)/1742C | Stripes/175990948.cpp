#include<bits/stdc++.h>
using namespace std ;
 
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        cin >> ws ;
        int cnta = 0 ;
        int cntb =0 ;
 
        string a[8] ;
        for(int i =0 ;i<8 ;i++)
        {
         cin >> a[i] ;
        }
        int x= 0;
 
        for(int i =0 ;i<8 ;i++)
        {
        int j =0 ;
        while(j<8)
        {
            if(a[i][j]=='R') cnta++ ;
            j++ ;
        }  
      //  cout << cnta << endl ; 
        if(cnta==8) x=1 ;
        cnta=0 ; 
        }
        
        if(x==1) cout << "R" << endl ;
        else cout << "B" << endl ;
        
 
    }
 
}