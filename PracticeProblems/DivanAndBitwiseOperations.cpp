//
// Created by Jonny Keane on 12/2/21.
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

/**
 * Class that gives us an integer that resides within the given modulus ring
 * - we do not have a subtraction operator although trivial to implement
 *      - instead, use negative addition
 * - for division, only works if modulus is prime
 * @author Jonny Keane
 */
class PModInt {
public:
    int i;
    int mod;
    PModInt(int i_, int mod_ = 1000000007) {
        i = i_ % mod_;
        mod = mod_;
    }
    PModInt operator+ (int a) {
        i = (i + a) % mod;
        return *this;
    }
    PModInt inline operator+ (PModInt pModInt) {
        return *this + pModInt.i;
    }
    PModInt operator* (int a) {
        i = (i * a) % mod;
        return *this;
    }
    PModInt inline operator* (PModInt pModInt) {
        return *this * pModInt.i;
    }
    PModInt operator/ (PModInt pModInt) {
        int c = pModInt.modInv();
        return *this * c;
    }
    PModInt inline operator/ (int a) {
        return *this / PModInt(a, mod);
    }
    string toString() {
        return to_string(i);
    }
    int modInv() {
        return pow(mod - 2);
    }

private:
    int pow(int n) {
        if (n == 0) return 1;
        int p = pow(n / 2) % mod;
        p = (p * p) % mod;
        return (n % 2 == 0) ? p : (i * p) % mod;
    }
};

/** To get the sum of all XORS for all subsets, you take the OR of all elements
 * and multiply by 2^{n - 1} where n is the number of elements in the subsequence
 * [https://www.geeksforgeeks.org/sum-xor-possible-subsets/]
 *
 * This happens because when you go through all the XOR subsets, you end up having
 * each bit in the OR of the set as being set for the half of the subsets. This
 * means that each bit in the OR contributes its value to the sum for half of the 2^n
 * subsets that you can create, or 2^{n - 1}. Therefore, you can rewrite the sum of
 * all subsets' XORS as 2^{n - 1} * {OR of all elements}.
 **/

void solve() {
    int n, m;
    cin >> n >> m;
    int all_ors = 0;
    for (int i = 0; i < m; ++i) {
        int l, r, x;
        cin >> l >> r >> x;
        all_ors |= x;
    }
    PModInt res(all_ors);
    for (int i = 0; i < n - 1; ++i) {
        res = res * 2;
    }
    cout << res.toString() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}