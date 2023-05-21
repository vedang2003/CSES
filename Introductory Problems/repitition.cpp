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

void solve()
{
    string str;
    cin>>str;

    int ans=0,c=1;
    rep(i,0,str.size()-1){
        if(str[i]==str[i+1]){
            c++;
        }
        else{
            ans=max(c,ans);
            c=1;
        }
    }
    ans=max(ans,c);
    cout<<ans;
    //ATTCGGGA
    //c=1 ans=1
    //c=2 ans=2
    //c=1 ans=1
    //c=3 ans=3
    //c=1 ans=1
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

