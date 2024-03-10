#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n ;
   cin >> n ;
   cin.ignore() ;
   vector<string> name ;
   for(int i =0 ;i<n ;i++) {
       string a ;
       cin >> a ;
       name.push_back(a) ;
   }
   
 map<string ,int > occurence ;
 
 for(auto it :name) {
     occurence[it]++ ;
     int i =0 ;
     if(occurence[it]>1) {
         
         i++ ;
         cout << it <<occurence[it]-1 << endl ; }
     else cout << "OK"<< endl  ; 
 }
   
   
}