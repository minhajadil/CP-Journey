#include<bits/stdc++.h>
using namespace std ;
 
 
 
int main()
{
    int t ;
    cin >> t ;
 
    while(t--){
        int n , k ;
        cin >> n >> k ;
 
        string a , b ;
        cin >> a >> b ;
        string t= a ;
        string t1 = b ;
        sort(t.begin(),t.end()) ;
        sort(t1.begin(),t1.end()) ;
      //  cout << t1 << " " << t << endl ;
 
        if(t!=t1) cout << "NO" << endl ;
        else 
        {
            int f =1 ;
            
            for(int i = n-1 ;i>=0 ;i--)
            {
                if(i-k<0 && i+k>n-1)
                {
                    if(a[i]!=b[i])
                    {
                        f=0 ;
                        break ;
                    }
                }
            }
 
            if(f==0) cout << "NO" << endl ;
            else cout << "YES" << endl ;
 
 
        }
 
 
    }
}