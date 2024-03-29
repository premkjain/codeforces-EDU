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


bool check(ll t,ll x,ll y,ll n){
    if(t<min(x,y)){
        return false;
    }
    t-=min(x,y);
    return (t/x + t/y+1)>=n;
}

void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll low=0,high=n*min(x,y);
 
    while(low+1<high){
        ll mid=(low+high)>>1;
        if(check(mid,x,y,n)){
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
    ios_base::sync_with_stdio(false);
    int t;
    // cin>>t;
    t=1;
    for(ll i=0;i<t;i++){
        solve();
    }
    return 0;
}