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

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        vector<ll> :: iterator  it=upper_bound(v.begin(),v.end(),x);
        ll ind=it-v.begin();
        cout<<ind<<endl;
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