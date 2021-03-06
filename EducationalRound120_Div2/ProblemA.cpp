//
// Created by Jonny Keane on 12/27/21.
//

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

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int s[3];
        cin >> s[0] >> s[1] >> s[2];
        sort(s, s + 3);
        bool valid = false;
        if ((s[0] + s[1] + s[2]) % 2 == 1) valid = false;
        if (s[2] == s[1] + s[0]) valid = true;
        if (s[0] == s[1] && s[2] % 2 == 0) valid = true;
        if (s[0] == s[2] && s[1] % 2 == 0) valid = true;
        if (s[1] == s[2] && s[0] % 2 == 0) valid = true;
        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}