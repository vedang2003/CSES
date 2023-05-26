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
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2==1){
        no;
        return;
    }
    //n=0,3mod4
    vector<int> v1,v2;
    if(n%4==0){
        for(int i=0;i<=(n-1)/4;i++){
            v1.pb(4*i+1);
            v1.pb(4*i+4);
            v2.pb(4*i+2);
            v2.pb(4*i+3);
        }
    }
    else{
        v1.pb(1);
        v1.pb(2);
        v2.pb(3);
        for(int i=1;i<=(n-1)/4;i++){
            v1.pb(4*i);
            v1.pb(4*i+3);
            v2.pb(4*i+1);
            v2.pb(4*i+2);
        }
    }
    yes<<endl;
    cout<<v1.size()<<endl;
    for(int x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(int x:v2){
        cout<<x<<" ";
    }

}
//n%4==0:
//1 2 3 4 5 6 7 8 
//1 3 6 10 15 21 28 36
//n%4==3:
//1 2 3 4 5 6 7
//1,2->one set
//3->other set
//rest numbers fit in

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

