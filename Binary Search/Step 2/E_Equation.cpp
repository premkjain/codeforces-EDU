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

bool check(double t,double c){
    return (t*t+sqrt(t))>=c;
}

void solve()
{
    double c;
    cin>>c;
    double low=0.0,high=1.0;
    while(!check(high,c)){
        high*=2.0;
    }

    ll cnt=0;
    while(cnt<100){
        double mid=(low+high)/2;
        if(check(mid,c)){
            high=mid;
        }
        else{
            low=mid;
        }
        cnt++;
    }

    cout<<setprecision(20)<<high<<endl;
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