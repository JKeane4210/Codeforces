//
// Created by Jonny Keane on 8/13/21.
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

    int n;
    cin >> n;
    queue<int> neg_odds;
    queue<int> pos_odds;
    int total = 0;
    int ratings[n];
    int sol[n];
    for (int i = 0; i < n; ++i) {
        cin >> ratings[i];
        if (abs(ratings[i] % 2) == 1) {
            if (ratings[i] > 0) {
                pos_odds.push(i);
            } else {
                neg_odds.push(i);
            }
        }
        sol[i] = ratings[i] / 2;
        total += sol[i];
    }
    while (total != 0) {
        if (total > 0) {
            int top = neg_odds.front();
            neg_odds.pop();
            sol[top] -= 1;
            total -= 1;
        } else {
            int top = pos_odds.front();
            pos_odds.pop();
            sol[top] += 1;
            total += 1;
        }
    }
    for (int & i: sol) {
        cout << i << endl;
    }
    return 0;
}