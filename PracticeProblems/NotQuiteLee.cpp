//
// Created by Jonny Keane on 12/13/21.
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
    long arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 1; i < 1 << n; ++i) {
        long seq_sum = 0;
        priority_queue<long> pq;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                cout << 1;
                seq_sum += arr[j];
                if ((arr[j] & 1) == 0) {
                    pq.push(arr[j]);
                }
            } else {
                cout << 0;
            }
        }
        cout << " " << seq_sum << " ";
        long total = 0;
        while (!pq.empty()) {
            long top = pq.top();
//            cout << top << endl;
            if (total < 0) {
                total += top;
            } else {
                total -= top;
            }
            pq.pop();
        }
        cout << total << endl;
        if (seq_sum & 1 || total == 0) {
            ++count;
        }
    }
    cout << count << endl;

    return 0;
}