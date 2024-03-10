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
     if(occurence[it]>1) cout << "YES" << endl ;
     else cout << "NO" << endl ; ;
 }
   
   
}