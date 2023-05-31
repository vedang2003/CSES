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
string s;
bool vis[7][7];
int ans;

bool emp(int i,int j){
    return i>=0 and i<7 and j<7 and j>=0 and !vis[i][j];
}
void dfs(int i,int j,int a=0){
    if(i==6 and j==6){
        if(a==48){
            ans++; 
        }
        return;
    }
    vis[i][j]=1;
    if(s[a]=='?' || s[a]=='L'){
        if(j && !vis[i][j-11]){
            if(!(!emp(i,j-2)&&emp(i+1,j-1)))
            dfs(i,j-1,a+1);
        }
    }
    if(s[a]=='?' || s[a]=='R'){
        if(j<6 && !vis[i][j+1]){
            dfs(i,j+1,a+1);
        }
    }
    if(s[a]=='?' || s[a]=='U'){
        if(i && !vis[i-1][j]){
            dfs(i-1,j,a+1);
        }
    }
    if(s[a]=='?' || s[a]=='D'){
        if(i<6 && !vis[i+1][j]){
            dfs(i+1,j+1,a+1);
        }
    }
    vis[i][j]=0;
}
void solve()
{
    cin>>s;
    dfs(0,0);
    cout<<ans;
}

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

