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
    	int k, n, m;
    	cin >> k >> n >> m;
    	int size = k;
    	int a[n];
    	int b[m];
    	for (int j = 0; j < n; ++j) {
    		cin >> a[j];
    	}
    	for (int j = 0; j < m; ++j) {
    		cin >> b[j];
    	}
    	int an = 0;
    	int bn = 0;
    	int sequence[n + m];
    	bool isValid = true;
    	for (int j = 0; j < n + m; ++j) {
    		if (an != n && a[an] == 0) {
    			sequence[j] = a[an++];
    			++size;
    			continue;
    		}
    		if (bn != m && b[bn] == 0) {
    			sequence[j] = b[bn++];
    			++size;
    			continue;
    		}
    		if (an != n && a[an] > 0 && a[an] <= size) {
    			sequence[j] = a[an++];
    			continue;
    		}
    		if (bn != m && b[bn] > 0 && b[bn] <= size) {
    			sequence[j] = b[bn++];
    			continue;
    		}
    		isValid = false;
    		break;
    	}
    	if (isValid) {
    		for (auto & val: sequence) {
    			cout << val << " ";
    		}
    		cout << endl;
    	} else {
    		cout << "-1" << endl;
    	}
    }
    

    return 0;
} 