#include<bits/stdc++.h>
using namespace std ;
 
 
 
 
int main() {
 
string a ;
cin>> a ;
int counter =0 ;
 
int b = a.size() ;
 for(int i =0 ;i<b ;i++) {
    if((a[i]=='1' && a[i+1]=='1' && a[i+2]=='1' && a[i+3]=='1' && a[i+4]=='1' && a[i+5]=='1' && a[i+6]=='1') )
       counter++ ;
       else if(a[i]=='0' && a[i+1]=='0' && a[i+2]=='0' && a[i+3]=='0' && a[i+4]=='0' && a[i+5]=='0' && a[i+6]=='0')
        counter++ ;
 
}
 
if(counter>0) cout << "YES" << endl ;
else cout << "NO" << endl ;
 
 
 
 
 
 
 
 
 
 
 
 
return 0 ;
}