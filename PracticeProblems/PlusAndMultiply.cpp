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

bool canPlusMultiply(int n, int a, int b) {
	// cout << n << endl;
	if (n == 1) return true;
	if (n <= 0) return false;
	if (a != 1 && n % a == 0 && canPlusMultiply(n / a, a, b)) {
		return true;
	} else {
		return canPlusMultiply(n - b, a, b);
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	int n, a, b;
    	cin >> n >> a >> b;
    	if (canPlusMultiply(n, a, b)) {
    		cout << "Yes" << endl;
    	} else {
    		cout << "No" << endl;
    	}
    }

    return 0;
} 