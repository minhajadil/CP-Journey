#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    string a ;
    int counter =0,counter1=0 ;
    for(int i =0 ;i<3;i++)
    {
        getline(cin,a) ;
        int size =a.size() ;
        for(int k=0 ;k<size ;k++) {
            if(a[k]=='a' || a[k]=='e' ||a[k]=='i' || a[k]=='o' || a[k]=='u')
            {
                counter++ ;
            }
        }
       
        if(i==0 && counter==5) counter1++ ;
        if(i==1 && counter==7) counter1++ ;
        if(i==2 && counter==5) counter1++ ;
       counter=0 ; 
    }
    
    if(counter1==3)  cout << "YES" << endl ;
    else cout << "NO" << endl ;
    
    
    
}