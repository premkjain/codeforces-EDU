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

bool check(double x,ll k,vi& v){
    ll cnt=0;
    for(ll i=0;i<v.size();i++){
        cnt+=v[i]/x;
    }
    return cnt>=k;
}

void solve()
{
    double n,k;
    cin>>n>>k;
    vi v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double low=0.0,high=1.0;
    while(check(high,k,v)){
        high*=2.0;
    }

    ll cnt=0;
    while(cnt<=1000){
        double mid=(low+high)/2;

        if(check(mid,k,v)){
            low=mid;
        }
        else{
            high=mid;
        }
        cnt++;
    }
    cout<<setprecision(20)<<low<<endl;
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