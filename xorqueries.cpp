#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define f(i,a,b) for(long long int i = (a); i < (b); i++)
#define fd(i,a,b) for(long long int i = (a); i >= (b); i--)

typedef long long int ll;
typedef pair<ll,ll>   ii;
typedef vector< ii >  vii;
typedef vector<ll>    vi;
typedef vector< vi >  vvi;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sz(a) (ll)(a.size())
#define all(a) a.begin(),a.end()
#define allrev(a) a.rbegin(),a.rend()
#define mset(a,b) memset(a,b,sizeof(a))
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
/**** Harshit Mahajan (ash0904) ******/

ll mod =  1000000007;
ll inf =  1000000000000000010;
ll ninf = -1000000000000000010;
double PI = 3.141592654;
template<typename T> inline T gcd(T a,T b){T t;if(a<b){while(a){t=a;a=b%a;b=t;}return b;}else{while(b){t=b;b=a%b;a=t;}return a;}}
ll power(ll x,ll y)
{
  ll ans = 1;
  while(y>0)
  {
    if(y&1)
      ans = (ans*x)%mod;
    x = (x*x)%mod;
    y = y>>1;
  }
  return ans;
}

#define nscan(n) scanf("%d",&n)
#define nscan2(n,m) scanf("%d%d",&n,&m)
#define nprint(n) printf("%d\n",n)
#define scan(n) scanf("%lld",&n)
#define scan2(n,m) scanf("%lld%lld",&n,&m)
#define scan3(n,m,o) scanf("%lld%lld%lld",&n,&m,&o)
#define print(n) printf("%lld\n",n)
#define print2(n,m) printf("%lld %lld\n",n,m)
#define print3(n,m,o) printf("%lld%lld%lld",&n,&m,&o)
#define strin(s) scanf("%s",s)
#define strout(n) printf("%s\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
        cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

vi arr(1000010, 0);
ll po[40]={1};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  f(i,1,36){
    po[i] = po[i-1]*2;
  }

  ll q;
  cin>>q;
  while(q--){
    ll x,l,r;
    cin>>x>>l>>r;
    string xbit;
    fd(i,35,0){
			if(x&po[i])
        xbit = "1" + xbit;
			else
        xbit = "0" + xbit;
		}
    ll y = 0;
    ll pos = 35,cur,temp;
    fd(i,pos,0){
      cur = po[i];
      temp = y + cur;
      if(l >= temp && xbit[i] == '1')
        y = temp;
      if((xbit[i] == '0') && temp <= r)
        y = temp;
    }
    cout<<(x^y)<<"\n";
  }
  return 0;
}
