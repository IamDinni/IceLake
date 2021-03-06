// imdineshsingh

#include <bits/stdc++.h>

using namespace std;

using str = string; // python style
using ll = long long;
using ld = long double;
using db = double;

using pi = pair<int, int>;
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
#define mFOR(i, First, Last) for (int i = (First); i < (Last); ++i)
#define FOR(i, Last) mFOR(i, 0, Last)
#define mROF(i, Last, First) for (int i = (Last)-1; i >= (First); --i)
#define ROF(i, Last) mROF(i, 0, Last)
#define loop(item, items) for (auto &item : items)

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

// Constants
constexpr int MOD = (int)1e9 + 7;

void setIO(str s = "")
{
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main()
{
    fastIO();
    // setIO("filename");

    int H, N, x;
    cin >> N >> H >> x;
    int arr[N];

    loop(item, arr) cin >> item;

    const int reqTime = H - x;
    bool possible = false;

    if (x > H)
    {
        cout << "YES";
        return 0;
    }

    FOR(i, N)
    {
        if (reqTime == arr[i])
        {
            possible = true;
            break;
        }
    }

    if (possible)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}