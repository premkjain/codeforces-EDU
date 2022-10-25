/* ____                       _  __                     _       _       _       
  |  _ \ _ __ ___ _ __ ___   | |/ /__ _ _ __ ___   __ _| |     | | __ _(_)_ __  
  | |_) | '__/ _ \ '_ ` _ \  | ' // _` | '_ ` _ \ / _` | |  _  | |/ _` | | '_ \ 
  |  __/| | |  __/ | | | | | | . \ (_| | | | | | | (_| | | | |_| | (_| | | | | |
  |_|   |_|  \___|_| |_| |_| |_|\_\__,_|_| |_| |_|\__,_|_|  \___/ \__,_|_|_| |_|
*/                                                                            

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;

#define hell    1000000007
#define PI      3.141592653589793238462
#define INF     1e18
#define vi      vector<ll>
#define pb      push_back
#define ppb     pop_back
#define mii     map<ll,ll>
#define pii     pair<ll,ll>
#define mp      make_pair
#define ff      first
#define ss      second
#define all(x)  (x).begin(), (x).end()

bool f(vi& x,vi& v,double t){
    ll n=x.size();
    double l=-1e10,r=1e10;
    for(ll i=0;i<n;i++){
        l=max(l,x[i]-t*v[i]);
        r=min(r,x[i]+t*v[i]);

        if(l>r){
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin>>n;
    vi x(n),v(n);
    for(ll i=0;i<n;i++){
        cin>>x[i]>>v[i];
    }

    ll cnt=100;
    double low=-1000000000,high=1000000000;
    while(cnt--){
        double mid=(low+high)/2;
        if(f(x,v,mid)){
            high=mid;
        }
        else{
            low=mid;
        }
    }

    cout<<setprecision(10)<<high<<endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    // cin>>t;
    t=1;
    for(ll i=0;i<t;i++){
        solve();
    }
    return 0;
}
