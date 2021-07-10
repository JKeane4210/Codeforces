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

bool isAlphabetical(string s) {
	size_t aLoc = s.find("a");
	if (aLoc == string::npos) {
		return false;
	}
	size_t left = aLoc - 1;
	size_t right = aLoc + 1;
	char curr = 'a';
	for (int i = 1; i < s.length(); ++i) {
		++curr;
		if (left >= 0 && s[left] == curr) {
			--left;
			continue;
		} else if (right < s.length() && s[right] == curr) {
			++right;
			continue;
		}
		return false;
	}
	// cout << curr << endl;
	return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	string s;
    	cin >> s;
    	cout << (isAlphabetical(s) ? "YES" : "NO") << endl;
    }

    return 0;
} 