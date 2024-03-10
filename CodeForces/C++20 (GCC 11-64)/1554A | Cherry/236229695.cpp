#include <bits/stdc++.h>
using namespace std;
 
#define trace(x) cout << #x << ": " << x << endl; 
typedef long long ll;
typedef pair <int,int> pii;
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        ll mx = -1e9;  
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n-1;i++){
            mx = max(mx,1LL*a[i]*a[i+1]) ;
        }
        
        cout <<mx<< endl;
 
 
 
    }    
 
 
 
    return 0;
}