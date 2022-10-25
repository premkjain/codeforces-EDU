/* ____                       _  __                     _       _       _       
  |  _ \ _ __ ___ _ __ ___   | |/ /__ _ _ __ ___   __ _| |     | | __ _(_)_ __  
  | |_) | '__/ _ \ '_ ` _ \  | ' // _` | '_ ` _ \ / _` | |  _  | |/ _` | | '_ \ 
  |  __/| | |  __/ | | | | | | . \ (_| | | | | | | (_| | | | |_| | (_| | | | | |
  |_|   |_|  \___|_| |_| |_| |_|\_\__,_|_| |_| |_|\__,_|_|  \___/ \__,_|_|_| |_|
*/                                                                            

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define debug(x); cout<<#x<<" "<<x<<endl;
ll hell=1e9+7;
typedef vector<ll> vi;

ll f(ll x,ll a,ll b,ll n){
    ll a1=(x/a);
    ll b1=(x/b);
    if(a1*b1>=n){
        return 1;
    }
    return 0;
}

void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll x=hell;

    ll low=0,high=1;
    while(f(high,a,b,n)==0){
        high*=2;
    }
    
    while(low+1<high){
        ll mid=(low+high)/2;
        if(f(mid,a,b,n)){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<high<<endl;
    return;
}

int main()
{
    int t;
    // cin>>t;
    t=1;
    while(t--)
        solve();
    return 0;
}
