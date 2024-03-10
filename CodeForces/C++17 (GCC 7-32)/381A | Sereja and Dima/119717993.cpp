#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std ;
 
int main()
{int n ;
    cin >> n ;
    vector<int> a(n) ;
    
    for(int i=0 ;i<n ;i++){
       cin >> a[i] ;
    }
    int s = 0 , d=0 , turn =1 ;
    
    while(!a.empty()) {
        if(turn==1){
            if(a.front()>a.back()){
                s+=a.front() ;
                a.erase(a.begin()) ;
            }
            else {
                s+=a.back() ;
                a.pop_back() ;
            }
            turn =2 ;
        }
        else {
            if(a.front()>a.back()){
                d+=a.front() ;
                a.erase(a.begin()) ;
            }
            else {
                d+=a.back() ;
                a.pop_back() ;
            }
            turn =1 ;
            
        }
        
        
        
        
        
        
    }
    
    
    
    cout << s <<" " <<d << endl ;
    
    
} 