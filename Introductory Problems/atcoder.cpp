#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef double db;
typedef long double ldb;
typedef float fl;
const ll mod = 1e9+7;
const int N=1e5+1;
#define sp " "
#define nl "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define rrep(i,n,k) for(int i=n;i>=k;i--)
#define vin(v) for(auto &i:v){cin>>i;}
#define yes cout<<"YES"
#define no cout<<"NO"
#define ff first
#define ss second
#define vll vector <ll>
#define maxHeap priority_queue<ll>
#define minHeap priority_queue<ll, vll, greater<ll>>
/*----------template ends-----------*/

ll binExp(ll a,ll b,ll m){
 ll res=1;
 while(b>0){
   if(b&1){
     res=(res*a)%m;
   }

   a=(a*a)%m;
   b>>=1;
 }
 return res;
}
ll factorial(ll n){
  ll res=1;
  for(int i=2;i<=n;i++){
    res=(res*i)%mod;
  }
  return res;
}
//given two arrays a and of integers
//find number of ways to reorder a such that ai>bi for all i
void solve()
{
    int n;
    cin>>n;
    vector<ll> a(n),b(n);
    vin(a);
    vin(b);
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    ll ans=1;
    //find number of elements larger than bi in a
    //take their permutation count
    for(int i=n-1;i>=0;i--){
      ll idx=upper_bound(all(a),b[i])-a.begin();
      ll cnt=n-idx;
      cout<<cnt-i<<" ";
      if(cnt-i<=0){
        ans=0;
      }
      else{
        ans=(ans*(cnt-i))%mod;
      }
      //cout<<ans<<" ";
    }
    cout<<ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    /*
    #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif */
    int tc=1;
    cin>>tc;
    while(tc--)
    {
      solve();
      cout<<nl;
    }
    return 0;
}