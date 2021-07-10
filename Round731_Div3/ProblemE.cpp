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

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
    	int n, k;
    	cin >> n >> k;
    	pair<int, int> ACs[k];
    	for (int j = 0; j < k; ++j) {
    		int an;
    		cin >> an;
    		ACs[j] = make_pair(an, 0);
    	}
    	for (int j = 0; j < k; ++j) {
    		int tn;
    		cin >> tn;
    		ACs[j].second = tn;
    	}
    	for (int j = 1; j <= n; ++j) {

    	}
    }

    return 0;
} 