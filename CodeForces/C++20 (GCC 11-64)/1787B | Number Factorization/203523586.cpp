#include<bits/stdc++.h>
using namespace std ;
 
#define ll long long 
 
 
 
int main()
{
 
    // observation : 10 = 10^1 sum=10 , 10 = 2*5 sum= 7
    // 2^10 = 1024 sum = 20 , 10^3= 1000 sum = 30  
    // if the base is maximum then we can get a maximum number
    // 90 = 2 × 3*3 × 5 sum = 2 + 6+5=13 90 = 30 * 3  sum= 30+3 =33
 
 
    int t ;
    cin >> t ;
 
    while(t--)
    {
        ll n ;
        cin >> n ;
 
        map<ll,ll>track ; //<group,group's element multiplication>
 
        for(int i =2 ;i*i<=n ;i++)
        {
            int group_number =0 ;
            while(n%i==0) 
            {
                group_number++ ;
                n/=i ;
 
                if(!track.count(group_number)) // checking if the group already exist or not
                {
                    track[group_number]=i ; // if it doesnt, making a group
                }
                else 
                {
                    track[group_number]*=i ; // otherwise inserting the element to the group
                }
 
            }
        }
 
        // as we are looping through sqrt(n) , for prime numbers we wont get any divisor under it
 
        if(n>1) 
        {
 
            if(track.count(1))
            {
                track[1]*=n ;
            }
            else 
            {
                track[1]=n ;
            }
        }
 
        ll sum=0 ;
 
        for(auto it : track)
        {
            sum+=it.second ;
        }
 
        cout << sum << endl ;
 
 
 
 
    }
 
 
 
 
 
}