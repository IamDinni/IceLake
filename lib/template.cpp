#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <vector>
#include <pair>

using namespace std;

using str = string; // python style
using ll = long long;
using ld = long double;
using db = double;

using pi = pair<int,int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;

using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<db>;
using vs = vector<str>;
using vpi = vector<pi>;
using vpl = vector<pl>;
using vpd = vector<pd>;

// Pairs
#define f first
#define s second
#define mp make_pair

// Loops
#define FOR(i, First, Last) for(int i = (First); i < (Last); ++i)
#define FOR(i, Last) FOR(i, 0, Last)
#define ROF(i, Last, First) for(int i = (Last) - 1; i >= (First); --i)
#define ROF(i, Last) ROF(i, 0, Last)
#define loop(item, items) for(auto& item: items)

// Vectors
#define pb push_back
#define pf push_front
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define eb emplace_back
#define rsz resize
#define rb rbegin
#define re rend
#define bk back()
#define ft front()
#define all(x) begin(x), end(x)
#define sor(x) sort(all(x))
#define sz(x) (int)(x).size()
#define rall(x) (x).rb(), (x).re()

// Contants
#define int MOD = 1e9 + 7;

void setIO(str s = "") { 
    freopen((str + ".in").c_str(), "r", stdin);
    freopen((str + ".out").c_str(), "w", stdout);
}

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main()
{
    fastIO();
    setIO("filename");

    int T;
    int N;
    cin >> T;
    
    FOR(i, 0, T) {
        cin >> N;
        int arr[N];
        loop(i, arr) cin >> i;
    }

    return 0;
}