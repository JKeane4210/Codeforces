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

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	int ax, ay, bx, by, fx, fy;
    	cin >> ax >> ay >> bx >> by >> fx >> fy;
    	int res = (abs(bx - ax) + abs(by - ay));
    	if ((bx == ax && bx == fx)) {
    		if (by < fy) {
    			if (ay > fy) {
    				res += 2;
    			}

    		} else if (ay < fy) {
    			if (by > fy) {
    				res += 2;
    			}
    		}
    	} else if ((by == ay && by == fy)) {
    		if (bx < fx) {
    			if (ax > fx) {
    				res += 2;
    			}

    		} else if (ax < fx) {
    			if (bx > fx) {
    				res += 2;
    			}
    		}
    	}
    	cout << res << endl;
    }

    return 0;
} 