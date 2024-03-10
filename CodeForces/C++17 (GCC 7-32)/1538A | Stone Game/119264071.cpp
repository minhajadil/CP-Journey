#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
    int n ;
    cin >> n ;
    int b[n] ;
    int maxi ,mini ;
    int counter1=0 , counter2=0,counter3=0 , counter4=0  ;
 
        for(int i =0 ;i<n ;i++)
        {
            cin >>b[i] ;
 
        }
        mini=b[0] ;
        maxi=b[0] ;
        for(int j =0 ;j<n ;j++) {
            if(maxi<b[j]) maxi=b[j] ;
            if(mini>b[j]) mini=b[j] ;
        }
 
        for(int k = 0 ;k<n ;k++) {
                counter1++ ;
            if(b[k]==mini) {
                break ;
            }
        }
       for(int l = n-1 ;l>=0 ;l--) {
                counter2++ ;
            if(b[l]==mini) {
                break ;
            }
        }
        if(counter1<counter2) counter1 = counter1 ;
        else counter1= counter2 ;
 
 
        for(int k = 0 ;k<n ;k++) {
                counter3++ ;
            if(b[k]==maxi) {
                break ;
            }
        }
        for(int l = n-1 ;l>=0 ;l--) {
                counter4++ ;
            if(b[l]==maxi) {
                break ;
            }
        }
        if(counter3>counter4) counter3 = counter4 ;
 
 
        int sum = counter1 +counter3 ;
 
        int counter5=0 , counter6=0 ,tem2,tem3 ;
        for(int m=0 ;m<n ;m++) {
            counter5++ ;
            if(b[m]==maxi || b[m]==mini) tem3=counter5 ;
        }
        for(int o=n-1 ;o>=0 ;o--) {
            counter6++ ;
            if(b[o]==maxi || b[o]==mini) tem2=counter6 ;
        }
        if(tem3>tem2) tem3=tem2 ;
 
    if(sum>tem3) cout << tem3 << endl ;
    else cout << sum << endl ;
    }
}