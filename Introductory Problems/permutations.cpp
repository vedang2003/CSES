#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef float fl;
const ll MOD = 1e9+7;
const int N=1e7+1;
#define sp " "
#define nl "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp ma ke_pair
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,k) for(int i=n;i>=k;i--)
#define vin(v) for(auto &i:v){cin>>i;}
#define vout(v) for(auto &i:v){cout<<i<<" ";}
#define yes cout<<"YES"
#define no cout<<"NO"
#define ff first
#define ss second

/*----------template ends-----------*/ 
ll gcd(int a, int b) { 
    if (b == 0) 
    return a; 
    return gcd(b, a % b);
}//eucl
ll pwr(int a, int b) {
    a %= MOD; 
    int res = 1; 
    while (b > 0) {
        if (b & 1) res = res * a % MOD; 
        a = a * a % MOD; 
        b >>= 1;
        } 
        return res;
}

void solve()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return;
    }
    if(n==2 or n==3){
        cout<<"NO SOLUTION";
        return;
    }
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
}
//2 4 1 3
//2 4 1 3 5
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
    #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
    #endif */
    int tc = 1;
    //cin>>tc;
    while (tc--)
    {
        solve();
        cout << nl;
    }
    return 0;
}

