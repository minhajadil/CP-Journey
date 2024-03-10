#include <bits/stdc++.h>
using namespace std;
 
#define trace(x) cout << #x << ": " << x << endl; 
typedef long long ll;
typedef pair <int,int> pii;
 
void punk(){
    ll n; cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll mx = INT_MIN;
    
    for (ll i = 0; i  < n - 1; i++){
        ll x = max(arr[i],arr[i+1]);
        ll y = min(arr[i],arr[i + 1]);
        ll k =  x*y;
        mx =   max(k,mx);
 
    }
    cout << mx << '\n';
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)punk();
 
 
 
    return 0;
}