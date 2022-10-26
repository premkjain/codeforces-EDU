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


int m,n;
vector<ll> ti(1001),z(1001),y(1001);
bool possible(ll T){
    ll curr=m;
    
    for (int i = 0; i < n; ++i)
    {
        curr-=T / (ti[i]*z[i] + y[i] ) * z[i] + min(T % (ti[i]*z[i] + y[i] )/ti[i],z[i]);      
    }
    return curr<=0;
}
 
void solve(){
   cin>>m>>n;
   for (int i = 0; i < n; ++i)
   {
       int a,b,c;cin>>a>>b>>c;
       ti[i]=a;
       z[i]=b;
       y[i]=c;
   }
   ll l=-1,r=1e9;
   while(r-l>1){
    ll mid=l+(r-l)/2;
    if(possible(mid)){
        r=mid;
    }
    else{
        l=mid;
    }
   }
   cout<<r<<endl;
   int curr=0;
   for (int i = 0; i < n; ++i)
   {
        if(curr>=m){
            cout<<0<<" ";
            continue;
        }
        int x=r/ (ti[i]*z[i] + y[i] ) * z[i] + min((r% (ti[i]*z[i] + y[i] ))/ti[i],z[i]);
        if(x>m-curr){
            cout<<m-curr<<" ";
            curr+=x;
            continue;
        }
        curr+=x;
        cout<<x<<" ";
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t=1;
//     cin>>t;
    for(ll i=0;i<t;i++){
        solve();
    }
    return 0;
}
