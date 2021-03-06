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

// use M_PI for PI

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
    	long long a, b;
        string as, bs;
    	cin >> as >> bs;
    	a = stoll(as);
        b = stoll(bs);
    	if (a == b) {
            cout << "0 0" << endl;
    	} else {
    		long long maxExcitement = llabs(a - b);
    		long long down = a / maxExcitement * maxExcitement;
    		long long up = down + maxExcitement;
    		long long moves = min(llabs(up - a), llabs(down - a));
            cout << maxExcitement << " " << moves << endl;
    	}
    }

    return 0;
} 