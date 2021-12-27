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

long fact(int n) {
    return n > 0 ? (long)n * fact(n - 1) : 1;
}

long nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    string bin;
    cin >> bin;
    int max_len = 1;
    int left = 0;
    int right = 0;
    int count_inside = 0;
    while (right != n) {
        if (bin[right] == '1') {
            if (count_inside == k) {
                while (bin[left] == '0') {
                    ++left;
                }
                ++left;
            } else {
                ++count_inside;
            }
        }
        if (count_inside == k) {
            max_len = max(max_len, right - left + 1);
        }
        ++right;
    }
    cout << max_len << endl;
    if (max_len == 1 || k == 0) {
        cout << "1" << endl;
        return 0;
    } else {
        cout << nCr(max_len, k) << endl;
    }

    return 0;
}