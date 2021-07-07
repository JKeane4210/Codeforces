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
	float vals[3];
	double stepProb;
	int step;
	Step(float c, float m, float p, double stepProb, int step) : stepProb(stepProb), step(step) {
		vals[0] = c;
		vals[1] = m;
		vals[2] = p;
	}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	float c, m, p, v;
    	cin >> c >> m >> p >> v;
    	double res = 0;
    	queue<Step> q;
    	q.push(Step(c, m, p, 1.0, 1));
    	while (!q.empty()) {
    		Step top = q.front();
    		q.pop();
    		if (top.vals[0] != 0) {
				if (top.vals[0] <= v) {
					q.push(Step(0, 
								top.vals[1] + top.vals[0] / 2, 
								top.vals[2] + top.vals[0] / 2, 
								top.stepProb * top.vals[0], 
								top.step + 1));
				} else {
					q.push(Step(top.vals[0] - v, 
		    					top.vals[1] + v / 2, 
		    					top.vals[2] + v / 2,
		    					top.stepProb * top.vals[0], 
		    					top.step + 1));
				}
			}
			if (top.vals[1] != 0) {
				if (top.vals[1] <= v) {
					q.push(Step(top.vals[0] + top.vals[1] / 2, 
								0,
								top.vals[2] + top.vals[1] / 2, 
								top.stepProb * top.vals[1], 
								top.step + 1));
				} else {
					q.push(Step(top.vals[0] + v / 2, 
								top.vals[1] - v,
								top.vals[2] + v / 2, 
								top.stepProb * top.vals[1], 
								top.step + 1));
				}
			}
    		res += top.stepProb * top.vals[2] * top.step;
    	}
    	cout << res << endl;
    }

    return 0;
} 