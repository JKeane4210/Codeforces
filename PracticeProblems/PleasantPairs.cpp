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

pair<int, int> data[100000];

int pleasantPairs() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		::data[i] = make_pair(x, i + 1);
	}
	sort(::data, ::data + n);
	int res = 0;
	for (int i = 0; i < n; ++i) {
		pair<int, int> ai = ::data[i];
		for (int j = i + 1; j < n; ++j) {
			pair<int, int> aj = ::data[j];
			if (ai.second + aj.second == ai.first * aj.first) {
				++res;
			}
			if (ai.first * aj.first > 2 * n) {
				// cout << "fast" << endl;
				break;
			}
		}
		if (ai.first * ai.first > 2 * n) {
			// cout << "faster" << endl;
			return res;
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	cout << pleasantPairs() << endl;
    }

    return 0;
} 