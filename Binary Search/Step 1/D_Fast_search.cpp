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

void solve()
{
    ll n;
    cin>>n;
    vi v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll k;
    cin>>k;
    for(ll i=0;i<k;i++){
        ll a,b;
        cin>>a>>b;
        ll x=lower_bound(v.begin(),v.end(),a)-v.begin();
        ll y=upper_bound(v.begin(),v.end(),b)-v.begin();
        cout<<y-x<<" ";
    }
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