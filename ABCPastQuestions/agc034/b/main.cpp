#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
using ll = long long;
using lint = long long;
using Graph = vector<vector<ll>>;
typedef vector<long long> vint;
typedef pair<long long, long long> pint;
#define MD 1000000007
#define INF INT32_MAX / 2
#define INF64 INT64_MAX / 2
#define EPS 0.001
#define REP(i, n) for (int i = 0; i < n; i++)
#define all(x) (x).begin(),(x).end()
#define ALL(f,c,...) (([&](decltype((c)) cccc) { return (f)(std::begin(cccc), std::end(cccc), ## __VA_ARGS__); })(c))
#define c(n) cout<<n<<endl;
#define cf(n) cout<<fixed<<setprecision(15)<<n<<endl;
template <class T>inline bool chmin(T&a,T b) {if(a>b){a=b;return true;}return false;}
template <class T>inline bool chmax(T&a,T b) {if(a<b){a=b;return true;}return false;}
template<class T>inline T sum(T n){return n*(n+1)/2;}
map<ll,ll> prime_fac(ll A) {map<ll,ll>mp;for(ll i=2;i*i<=A;i++){while(A%i== 0){mp[i]++;A/=i;}}if(A!=1){mp[A]=1;}return mp;}
bool is_prime(ll N){if(N<=1)return false;for(ll i=2;i*i<=N;i++){if(N%i==0) return false;}return true;}
template<class T>inline T myceil(T a,T b){return (a+(b-1))/b;}
bool is_product_overflow(long long a,long long b) {long prod=a*b;return (prod/b!=a);}


void solve(std::string s){
    string S = "";
    ll N = s.size();
    REP (i, N) {
        if (s[i] == 'B' && s[i + 1] == 'C' && i != N - 1) {
            S.push_back('X');
            i++;
        } else S.push_back(s[i]);
    }

    ll ans = 0;
    N = S.size();
    REP (i, N) {
        ll j = i;
        if (S[i] == 'A') {
            ll X_cnt = 0;
            while (j < N && (S[j] == 'A' || S[j] == 'X')) {
                if (S[j] == 'X') {
                    ans += j - i - X_cnt;
                    X_cnt++;
                }
                j++;
            }
        }
        i = j;
    }

    c(ans)
}

int main(){
    std::string s;
    std::cin >> s;
    solve(s);
    return 0;
}
