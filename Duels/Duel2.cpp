#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define pb push_back

#define V vector
#define vi V<int>
#define vll V<ll>
#define vd V<double>
#define pii pair<int, int>
#define pll pair<ll,ll>
#define vpii V<pii>
#define vpll V<pll>
#define graph V<vi>

// loops
#define WHILE(n) while(n--)
#define FOR(a) for(ll i=0;i<a;i++)
#define FIND(a, e) find(a.begin(), a.end(), e)
#define minimum(a) *min_element(a.begin(), a.end())
#define maximum(a) *max_element(a.begin(), a.end())

#define nl '\n'

// use M_PI for PI (imported from cmath within stdc++.h)

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long a, b;
        cin >> a >> b;
        if (a >= b && a % b == 0) {
            cout << "NO" << endl;
            continue;
        }
        long long z = a * b;
        long long x = a;
        long long y = z - a;
        while ((x % b == 0 || y % b == 0) && x < y) {
            x += a;
            y -= a;
        }
//        if (y > x) {
//            cout << "NO" << endl;
//            continue;
//        }
        cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}