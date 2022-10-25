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
#define maxn 400005
#define vi      vector<ll>
#define pb      push_back
#define ppb     pop_back
#define mii     map<ll,ll>
#define pii     pair<ll,ll>
#define mp      make_pair
#define ff      first
#define ss      second
#define all(x)  (x).begin(), (x).end()


int fa[maxn], sz[maxn];
int gfa(int a) {
	if (fa[a] == a) return a;
	return fa[a] = gfa(fa[a]);
}

int c[maxn];
int cc(int a) {
	return a * (a - 1) / 2;
}

char p[maxn], t[maxn];
int a[maxn]; 
bool fl[maxn];
bool check(int c) {
	memset(fl, 0, sizeof(fl));
	int tl = strlen(t);
	for (int i = c; i < tl; i++)
		fl[a[i] - 1] = 1;
	int npl = 0;
	int pl = strlen(p);
	for (int i = 0; i < tl; i++) {
		if (!fl[i]) continue;
		if (t[i] == p[npl]) npl++;
	}
	if (npl >= pl) return 1;
	return 0;
}

void solve()
{
    cin>>t>>p;
	int l = strlen(t);
	for (int i = 0; i < l; i++)
		cin>>a[i];
	int ls = 0, rs = l - 1;
	while (ls < rs) {
		// x ~ end
		int mid = (ls + rs) / 2;
		if (check(mid + 1)) ls = mid + 1;
		else rs = mid;
	}
	cout << ls << endl;
	return ;
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