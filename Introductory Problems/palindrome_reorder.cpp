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
    string s;
    cin>>s;
    int c[26]={0};
    for(auto ch:s){
        c[ch-'A']++;
    }

    int odd=0;
    for(int i=0;i<26;i++){
        odd+=c[i]&1;
    }
    string t,ans;
    if(odd>1){
        cout<<"NO SOLUTION";
        return;
    }
    for(int i=0;i<26;i++){
        if(c[i]&1)
           for(int j=0;j<c[i];j++){
               t+=(char)('A'+i);
        }
    }
    string left;
    for(int i=0;i<26;i++){
        if(c[i]&1^1)
        for(int j=0;j<c[i]/2;j++){
            left+=(char)('A'+i);
        }
    }
    string right=string(left.rbegin(),left.rend());
    ans=left+t+right;
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

