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
typedef vector<ll> vi;
ll hell=1e9+7;

void solve()
{
    ll n,k;
    cin>>n>>k;
    vi v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        vi :: iterator it=lower_bound(v.begin(),v.end(),x);
        cout<<1+it-v.begin()<<endl;
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