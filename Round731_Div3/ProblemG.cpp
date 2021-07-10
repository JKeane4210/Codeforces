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

struct Step {
	public:
		int nodeID;
		int step;
		Step(int nodeID, int step) : nodeID(nodeID), step(step) {}
};

void howManyPaths() {
	int n, m;
	cin >> n >> m;
	int numPaths[n];
	for (int i = 0; i < n; ++i) {
		numPaths[i] = 0;
	}
	vector<int> connections[n];
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		--a; --b;
		connections[a].push_back(b);
	}
	queue<Step> q;
	q.push(Step(0, 0));
	int currStep = 0;
	while (!q.empty()) {
		Step top = q.front();
		++numPaths[top.nodeID];
		if (top.step == n + 1) break;
		q.pop();
		for (int conn: connections[top.nodeID]) {
			q.push(Step(conn, top.step + 1));
		}
	}
	while (!q.empty()) {
		Step top = q.front();
		numPaths[top.nodeID] = -1;
		if (top.step == 2 * (n + 1)) break;
		q.pop();
		for (int conn: connections[top.nodeID]) {
			q.push(Step(conn, top.step + 1));
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << numPaths[i] << " ";
	}
	cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	howManyPaths();
    }

    return 0;
} 